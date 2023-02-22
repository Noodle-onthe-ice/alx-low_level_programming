#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		c += 1;
	}
}

/**
 * main - Entry point
 *
 * Return: 0
 */

 int main(void)
{
	char a = print_alphabet();
	putchar(a);
	return(0);
}
