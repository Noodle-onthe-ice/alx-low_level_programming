#include "main.h"
#include <stdio.h>

/**
 *print_alphabet_x10 - prints alphabets 10x
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		putchar('\n');
		i += 1;
	}
}
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	putchar('\n');
}
