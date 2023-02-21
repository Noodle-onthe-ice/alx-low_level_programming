#include <stdio.h>

/**
 * main - code entry
 * Return: 0
 */

int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		if (cha == 'q' || cha == 'e')
			continue;
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
