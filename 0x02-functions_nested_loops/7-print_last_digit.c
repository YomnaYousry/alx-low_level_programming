#include "main.h"

/**
 *print_last_digit(-  print last digit of number
 *@c: number to get its last digit
 *Return:print last digit
 *and 0 if 0
 */

int print_last_digit(int c)

{
	char result;

	if (c < 0)
	{
		c = c *-1;
	}

	result = c % 10;
	_putchar(result);
	return (result);

}
