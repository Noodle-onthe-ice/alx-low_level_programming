#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i += 1;
	}

	putchar('\n');

	return (0);
}

