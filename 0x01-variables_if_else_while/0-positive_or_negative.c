#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the code entry
 * if - checks a condition
 * else if - an alt if if condition fails
 * else - for when all else fails
 * RETURN: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAXX / 2;
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
