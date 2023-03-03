#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: 2nd string
 * @dest: 1st string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, l;

	k = 0;

	while (*(dest + k) != '\0')
	{
		k++;
	}

	for (l = 0; *(src + l) != '\0' && l < n; l++, k++)
	{
		*(dest + k) = *(src + l);
	}

	*(dest + k) = '\0';

	return (dest);
}
