#include <stdio.h>

/**
 * main - entry point
 * char: initialise char data type
 * int: initialise int data type
 * long int: initialise long int
 * long long long int: initialise long long long int
 * float: initialise float
 * Return: 0 if there are nor errors, 1 otherwise
 */

int main(void)
{
	char charType;
	int intType;
	long int long_intType;
	long long int longlong_intType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a int: %zu byte(s)\n", sizeof(long_intType));
	printf("Size of a int: %zu byte(s)\n", sizeof(longlong_intType));
	printf("Size of a int: %zu byte(s)\n", sizeof(floatType));
	
	return (0);
}
