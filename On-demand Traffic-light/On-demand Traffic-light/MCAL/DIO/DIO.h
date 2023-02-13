#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/Macros.h"
#include "../../Utilities/Register.h"

//** FUNCTION prototypes **//
void DIO_init(uint8_t portname, uint8_t pinnum, uint8_t direction);
void DIO_write(uint8_t portname, uint8_t pinnum, uint8_t state);
void DIO_toggle(uint8_t portname, uint8_t pinnum);
void DIO_read(uint8_t portname, uint8_t pinnum, uint8_t* result);


//** PORT names **//
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'



#define DIO_OUTPUT 1
#define DIO_INPUT 0


#define DIO_HIGH 1
#define DIO_LOW 0


#endif /* DIO_H_ */
