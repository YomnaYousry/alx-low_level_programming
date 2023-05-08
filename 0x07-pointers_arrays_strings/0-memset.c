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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
