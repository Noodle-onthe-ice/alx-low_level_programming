#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int n, last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2 last_dig = n % 10;
	if (last_dig == 0)
		printf("Last digit of %d is 0\n", n);
	else if (last_dig < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	return (0);
}

