#include "main.h"

/**
* _memcpy - function that copy from src to dest
 *@n: Number of Bytes
 *@src: src pointer
 *@dest:Pointer
 *Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
