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
	int len = u = 0;

	while (len == 0)
	{
		if (((*s1 + u) == '\0') && (*(s2 + u) == '\0'))
			break;
		len = *(s1 + u) - *(s2 + u);
		u++;
	}
	return (len);
}
