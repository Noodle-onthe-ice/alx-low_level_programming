#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function
 * @c: parameter
 * Return: 1 if input is an alphabet otherwise, 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
