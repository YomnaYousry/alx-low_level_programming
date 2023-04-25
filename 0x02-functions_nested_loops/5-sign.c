#include "main.h"

/**
 *print_sign - prints the sign of a number.
 *@c: we need to print sign of number
 *Return: print 1 &+ if greater than 0, -1 &- if less than 0 
 *and 0 if 0
 */

int print_sign(int n)

{
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
	}

}
