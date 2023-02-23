#include "main.h"
#include <stdio.h>

/**
 * print_sign - function entry
 * Return: 1, 0 or -1 based on conditions
 */

int print_sign(int n)
{
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

