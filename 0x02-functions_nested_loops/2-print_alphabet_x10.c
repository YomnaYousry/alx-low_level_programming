#include "main.h"

/**
  *print_alphabet_x10 - print alphabets 10 times in lowercase

  */
void print_alphabet_x10(void)
{
	char i;
	int count = 0;

	while (count <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');

		count++;
	}
}
