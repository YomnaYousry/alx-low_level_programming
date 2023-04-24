#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 10; m++)
		{
			if (i < m)
			{
				putchar(i + '0');
				putchar(m + '0');

				if (i == 8 && m == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}
