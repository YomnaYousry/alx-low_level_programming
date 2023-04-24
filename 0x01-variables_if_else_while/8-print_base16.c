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
		putchar(i + '0');
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');

	return (0);
}
