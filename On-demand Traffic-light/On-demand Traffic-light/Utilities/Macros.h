#ifndef MACROS_H_
#define MACROS_H_



typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;



#define CLEAR_BIT(REG,NUM) REG&=~(1<<NUM)
#define SET_BIT(REG,NUM) REG|=(1<<NUM)
#define TOGGLE_BIT(REG,NUM) REG^=(1<<NUM)
#define READ_BIT(REG,NUM) ((REG&(1<<NUM))>>NUM)

//** LED port names **//
#define CAR_light PORT_A
#define PED_light PORT_B

	//** LED pin names **//
#define LED_green	0
#define LED_yellow	1
#define LED_red		2

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'



	//** Button port name **//
#define BUTTON_port PORT_D

	//** Button pin name **//
#define BUTTON_pin	0

	//** Execution phases **//
#define phase_1 0
#define phase_2 1
#define phase_3 2
#define phase_4 3


#endif
