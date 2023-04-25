#include "main.h"

/**
 *print_alphabet_x10 - Used to print 10 times the alphabet and in lowercase
 */

void print_alphabet_x10(void)

{
	char i;
	int count;
	while (count < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		count++;
	}
