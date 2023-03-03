#include "main.h"

/**
 * _strncpy - copies one string with another
 * @dest: destination
 * @src: source
 * @n: limit
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && dest[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
	{
		dest[x] = '\0';

	}
	return (dest);
}
