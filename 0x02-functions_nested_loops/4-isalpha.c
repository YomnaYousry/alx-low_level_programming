#include "main.h"

/**
 *_isalpha - checks for alphabetic character.
 *@c: we need to check if alphabetic character or not
 *Return: it will return 1 if lower and zero if not
 */

int _isalpha(int c);

{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
		return (0);

}
