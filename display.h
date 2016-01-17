#ifndef DISPLAY_H
#define DISPLAY_H

/* displays the hexadecimal value on 7 segement display
   @param hex value for character or number, digit on a multi-digit display to show the character on,*/
void hex_display(int hex, int digit);

/* Simple list of most if not all of the possible character and
   number combinations for a 7segment display */
int hex_value(char in);

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
