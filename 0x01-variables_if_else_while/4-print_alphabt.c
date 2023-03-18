#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints alphabets ecxept q and e
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int x;
	int y;
	char z[2] = 'qe';

	y = x - z[0] - z[1];

	for (x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(tolower(y));
	}
	putchar('\n');
	return (0);
}


