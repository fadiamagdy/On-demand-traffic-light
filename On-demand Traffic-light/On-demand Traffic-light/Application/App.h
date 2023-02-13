#ifndef APP_H_
#define APP_H_

//All the includes of the lower levels
#define F_CPU 1000000U
#include "../ECUAL/BUTTON/Button.h"
#include "../ECUAL/LED/LED.h"
#include "../MCAL/Interrupt/interrupt.h"
#include "../MCAL/Timers/timers.h"


//** Application function prototypes **//
void APP_init();
void APP_start();




#endif
