#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st parameter
 * @s2: 2nd parameter
 * Return: 1, 0 or -1
 *
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (0);
	}
	else if (s1 > s2)
	{
		return (1);
	}
	else
		return (-1);
}
