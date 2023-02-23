#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase letters
 *
 * Returns: 1 if c is lowercaseor 0 if otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
