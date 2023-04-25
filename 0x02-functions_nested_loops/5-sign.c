#include "main.h"

/**
 *print_sign - prints the sign of a number.
 *@n: we need to print sign of number
 *Return: print 1 &+ if greater than 0, -1 &- if less than 0 
 *and 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
