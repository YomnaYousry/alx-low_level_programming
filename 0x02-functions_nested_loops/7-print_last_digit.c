#include "main.h"

/**
 *print_last_digit(-  print last digit of number
 *@c: number to get its last digit
 *Return:print last digit
 *and 0 if 0
 */

int print_last_digit(int c)

{
	c = c % 10;

	if (c < 0)
	{
		c = c * -1;
	}

	_putchar(c + '0');
	return (c);

}
