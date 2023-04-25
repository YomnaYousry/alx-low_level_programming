#include "main.h"

/**
 *_islower - Used to check for lowercase characters;
  *c: This is the input paratemer that we need to check if its lower case or not
 *Return: Return 1 if the character is lower case and return zero if the charcter is not lower case
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
