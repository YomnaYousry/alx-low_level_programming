#include "main.h"

/**
 *_islower - Used to check for lowercase characters;
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