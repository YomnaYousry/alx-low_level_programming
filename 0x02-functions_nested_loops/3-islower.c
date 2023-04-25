#include "main.h"

/**
 *_islower - Used to check for lowercase characters;
 *@c: we need to check if its lower case or not
 *Return: it will return 1 if lower and zero if not

 */

int _islower(int c)

{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);

}
