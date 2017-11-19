#ifndef DISPLAY_H
#include <avr/io.h>
#define DISPLAY_H

#define SEGMENT_PORT PORTB
#define DIGIT_PORT PORTC
#define BUTTON_1 PD2
#define BUTTON_2 PD3
#define BUTTON_PIN PIND


/* displays the hexadecimal value on 7 segement display
   @param hex value for character or number, digit on a multi-digit display to show the character on,*/
void display_hex(uint16_t hex, uint16_t digit);

int num_to_hex(uint16_t num);

/* Simple list of most if not all of the possible character and
   number combinations for a 7segment display */
int hex_value(char in);


unsigned int count(unsigned int);


void print_num(uint16_t num);

/* Simple convenience function to print out a leeter to each digit of the
   display it assumes you're starting at zero on the displays
   @param str including numbers need to be passed as strings as well*/
void _print(char* str);

/* prints out 'Err1' onto 4 digit display */
void err_msg();

/*displays a siple demo on the displays lighting up each digit with its number
  starting from 1-4 */
void demo();

#endif
