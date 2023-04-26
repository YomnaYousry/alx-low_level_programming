#include "main.h"

/**
 *_abs -  computes the absolute value of an integer.
 *@c: number to get its absolute
 *Return:print its absolute value
 *and 0 if 0
 */

int _abs(int c
		)

{
	int result;

	if (c < 0)
	{
		result = c * -1;
		return (result);
	}
	else
	{
		return (c);
	}

}
