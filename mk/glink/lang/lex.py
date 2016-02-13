#!/usr/bin/env python3
#coding: utf-8

from libpy.colortext  import *
import ply.lex

__author__ = "Mirmik"
__date__ = "2015-01-11"


brackets = []

tokens = (
    #"SUPERWORD",
    'WORD', 
    'FLOAT',
    'HEXNUMBER', 'BINNUMBER', 'NUMBER', 'STRING', "WRONGSTRING",

    'APPEND',
    'LPAREN',   'RPAREN',   # ( )
    'LBRACKET', 'RBRACKET', # [ ]
    'LBRACE',   'RBRACE',   # { }
    'COMMA', 'POINT', 'COLON', 'DOUBLECOLON', 'EQUALS', 'SEMI', 
    'AMPERSAND','OR',

    'MPROD', 'DPROD',
    'DIVMUL', 'PLUSMINUS',
    'DIVIDER',
    'QUESTION',
    'NEWLINE',

    #KEYWORDS
    'DEFFUNC',
    'DEFINE',
    'MODULE',
    'DOWNLEVEL',
    'IF',
    'AT',
    'APPLICATION',
    'VARIABLES',
    'PYTHON',
    'EXECFILE',
    'EXECTEXT',
    'INPUT',
    'RETURN',
    'REPEAT',
    'BREAK',
    'APLICATION',
    'YIELD',
    'MLIST',
    'UNLESS',
    'MODULES',
    'LENGTH',
    'CURFILE',
    'ABSPATH',
    'RELPATH',
    'ELSE',
    'LISTDIR',
    'ISDIR',
    'RELPATHBASE',
    'EXFILES',
    'EVALUATE',
    'EXECSCAN',
    'INVRELPATH',
    'CYCLE',
    'LESS',
    'COMPILE',
    'SUBST',
    'DEFOP',
    'PASS',
    'IN',
    'PRINT',
)

t_ignore           = ' \t'

def t_ignore_COMMENT(t):
    r'(//.*)|(\#.*)'
    return None

def t_DIVIDER(t):
    r';+'
    return t

def t_NEWLINE(t):
    r'\n+'
    nr_newlines = t.value.count('\n')
    t.lexer.lineno += nr_newlines
    return None


def lexer_error(str, t):
    print(red("in file ") + lexer.lexed_file.name + " ", red(str), t)
    exit()

def check_bracket(br, t):
    if len(brackets) == 0: lexer_error("closed nonoppen bracket", t)
    if br != brackets[-1].value:
        lexer_error("wrong bracket type", t);
        exit()

# Paren/bracket counting
def t_LPAREN(t):   r'\('; brackets.append(t);  return t
def t_RPAREN(t):   r'\)'; check_bracket('(', t); del(brackets[-1]); return t
def t_LBRACKET(t): r'\['; brackets.append(t);  return t
def t_RBRACKET(t): r'\]'; check_bracket('[', t); del(brackets[-1]); return t
def t_LBRACE(t):   r'\{'; brackets.append(t);  return t
def t_RBRACE(t):   r'\}'; check_bracket('{', t); del(brackets[-1]); return t

def t_MPROD(t):    
    r'\*+'; 
    if len(t.value) > 2:  lexer_error("so many * * * 0_o", t);
    if len(t.value) == 2: t.type = "DPROD"
    if len(t.value) == 1: t.type = "DIVMUL"
    return t

# Delimeters
t_AT            = r'\@'
t_COMMA            = r','
t_COLON            = r':'
t_APPEND           = r'(\+\=)'
t_DOUBLECOLON      = r'::'
t_DEFOP           = r'(\=\=\=)'
t_EQUALS           = r'\='
t_OR               = r'\|'
t_LESS               = r'\<'
t_AMPERSAND        = r'\&'
t_DIVMUL           = r'\/'
t_QUESTION           = r'\?'
t_PLUSMINUS        = r'\+|\-'

def t_WORD(t):
    r'[A-Za-z_]\w*'
    if t.value == 'module': t.type = "MODULE"
    if t.value == 'deffunc': t.type = "DEFFUNC"
    if t.value == 'application': t.type = "APPLICATION"
    if t.value == 'define': t.type = "DEFINE"
    if t.value == 'print': t.type = "PRINT"
    if t.value == 'cycle': t.type = "CYCLE"
    if t.value == 'return': t.type = "RETURN"
    if t.value == 'variables': t.type = "VARIABLES"
    if t.value == 'input': t.type = "INPUT"
    if t.value == 'downlevel': t.type = "DOWNLEVEL"
    if t.value == 'execfile': t.type = "EXECFILE"
    if t.value == 'subst': t.type = "SUBST"
    if t.value == 'exectext': t.type = "EXECTEXT"
    if t.value == 'python': t.type = "PYTHON"
    if t.value == 'unless': t.type = "UNLESS"
    if t.value == 'length': t.type = "LENGTH"
    if t.value == 'else': t.type = "ELSE"
    if t.value == 'in': t.type = "IN"
    if t.value == 'if': t.type = "IF"
    #if t.value == 'while': t.type = "WHILE"
    if t.value == 'break': t.type = "BREAK"
    if t.value == 'repeat': t.type = "REPEAT"
    if t.value == 'mlist': t.type = "MLIST"
    if t.value == '_curfile': t.type = "CURFILE"
    if t.value == '_abspath': t.type = "ABSPATH"
    if t.value == '_relpath': t.type = "RELPATH"
    if t.value == 'pass': t.type = "PASS"
    if t.value == '_relpathbase': t.type = "RELPATHBASE"
    if t.value == '_invrelpath': t.type = "INVRELPATH"
    if t.value == 'exfiles': t.type = "EXFILES"
    if t.value == 'evaluate': t.type = "EVALUATE"
    if t.value == 'isdir': t.type = "ISDIR"
    if t.value == 'listdir': t.type = "LISTDIR"
    if t.value == 'yield': t.type = "YIELD"
    if t.value == 'execscan': t.type = "EXECSCAN"
    if t.value == 'aplication': t.type = "APLICATION"
    if t.value == 'compile': t.type = "COMPILE"
    if t.value == 'modules': t.type = "MODULES"
    #if t.value == 'loop': t.type = "LOOP"
    return t

def t_POINT(t):
    r'\.'
    return t 

def t_HEXNUMBER(t):
    r'(0x)[\da-fA-F]+'
    t.value = int(t.value[2:],16)
    t.type = "NUMBER"
    return t

def t_BINNUMBER(t):
    r'(0b)[\da-fA-F]+'
    t.value = int(t.value[2:],2)
    t.type = "NUMBER"
    return t

def t_NUMBER(t):
    r'\d+'
    t.value = int(t.value)
    return t

def t_STRING(t):
    r'(\"([^\"]*)\"|\'([^\']*)\')'
    t.value = str(t.value[1:-1].encode().decode("unicode_escape"))
    return t

def t_WRONGSTRING(t):
    r'\"(.*)'
    lexer_error("wrong_string", t)
    return t

    return t

def t_error(t):
    lexer_error("ill_err", t);

def t_eof(t):
    if len(brackets) > 0: lexer_error("unclosed bracket on EOF", brackets[-1]); 
    return None

lexer = ply.lex.lex()

def lexfile(file):
    lexer.lexed_file = file 
    lexer.input(file.read())
    toks = []
    while True:
        x = lexer.token()
        if x == None: break 
        toks.append(x)
    return toks