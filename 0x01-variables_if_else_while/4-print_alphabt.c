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
	char z[2];

	z[0] = 'q';
	z[1] = 'e';
	for (x = 'A' ; x <= 'Z' ; x++)
	{
		y = x - z[0] - z[1];
		putchar(tolower(y));
	}
	putchar('\n');
	return (0);
}


