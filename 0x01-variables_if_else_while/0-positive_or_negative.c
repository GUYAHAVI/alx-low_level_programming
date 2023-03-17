#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - start of code
 *
 *Return:  always 0(success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d n is a positive integer", n);
	}
	else if (n < 0)
	{
		printf("%d n is a negative number", n);
	}
	else
	{
		printf("%d n is zero", n);
	}
	return (0);
}
