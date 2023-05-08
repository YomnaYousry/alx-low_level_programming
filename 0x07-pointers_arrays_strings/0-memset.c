#include "main.h"

/**
 *main - Entry point
 *
 *@n: Number of Bytes
 *@b: Fixed byte
 *@s:Pointer
 *Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
