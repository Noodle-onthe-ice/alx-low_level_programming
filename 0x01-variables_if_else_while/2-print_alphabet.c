#include <stdio.h>

/**
 * main - code entry
 * Return: 0
 */

int main(void)
{
	char  cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
		if (cha == 'z')
			putchar('\n');
	}
	return (0);
}
