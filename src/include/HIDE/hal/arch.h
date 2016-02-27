/**
 * @file
 * @brief Defines ARCH interface
 *
 * @date 25.11.09
 * @author Eldar Abusalimov
 */

#ifndef HAL_ARCH_H_
#define HAL_ARCH_H_

#include <asm/hal/arch.h>
#include <sys/compiler.h>
#include <sys/cdefs.h>

typedef enum {
	ARCH_SHUTDOWN_MODE_HALT,
	ARCH_SHUTDOWN_MODE_REBOOT,
	ARCH_SHUTDOWN_MODE_ABORT,
} arch_shutdown_mode_t;

/**
 * Performs basic machine-dependent initialization.
 *
 * @note Implementation have to setup such low-level features as e.g. cache.
 */

__BEGIN_DECLS

void arch_init(void);

unsigned int arch_systimer_state(void);
//void arch_idle(void);

void _NORETURN arch_halt(void);

void _NORETURN arch_shutdown(arch_shutdown_mode_t mode);

__END_DECLS


#define arch_atomic_temp(temp) __arch_atomic_temp(temp)
#define arch_deatomic_temp(temp) __arch_deatomic_temp(temp)

#define arch_atomic() __arch_atomic()
#define arch_deatomic() __arch_deatomic()



#endif /* HAL_ARCH_H_ */