
#include "genos/terminal/autom_terminal.h"
#include "genos/decoration.h"
#include "genos/defs.h"
void automTerminal::endl_event() 
{
	state = 1;
	bool success = false;	
	char* str = rl.get_line();
	if (!strcmp(str, "about"))
	{
		print_about(&stdout);
		success = true;
		goto _exit;
	};


	if (!strcmp(str, "scanmode"))
	{
		scanmode = true;
		stdout.println("ScanMode active");
		success = true;
		goto _exit;	
	};

	if (!strcmp(str, "help"))
	{
		stdout.println("CommandServer commands:");
		stdout.println("TODO");
		stdout.println("Terminal inline commands:");
		stdout.println("about");
		stdout.println("help");
		success = true;
		goto _exit;
	};

	void(*f)(int, char**);
	if (!central_cmdlist.find(str, f))
	{
		((void(*)())f)();
		success = true;
		goto _exit;
	};

	_exit:
	rl.init();
	if (!success) {
		stdout.print("Wrong command: ");
		stdout.println(str);
	};
};

void  automTerminal::exec() 
{
	switch(state)
	{
		case 0:
		print_banner(&stdout);
		print_about(&stdout);
		state=1;
		break;

		case 1:
		stdout.putc('#');
		stdout.print(machine_name);
		stdout.putc(':');
		state=2;
		break;
				
		case 2:
		while (stdin.available()) 
		{
			char c = static_cast<char>(stdin.getc()); 
		
			//if (scanmode) 
			//{
			//	stdout.printhexln(c);
			//	goto _exit;
			//};

			/*if (
				!(
					(c >= 'a' && c<='z') ||
					(c >= 'A' && c<='Z') ||
					(c >= '0' && c<='9') ||
					(c == '\n') || (c == '\r')
				 )
				) return;*/

			if ((oldchar=='\n' && c=='\r') || (oldchar=='\r' && c=='\n')) return;
			switch(c)
			{
				case '\r': 
				case '\n': stdout.print("\r\n"); endl_event(); return; break;
				default: rl.putc(c); stdout.putc(c); break;							
			};
				
			//_exit:		
			oldchar=c;
		};
			
		wait_autom(&stdin);
		break;				
	};
};