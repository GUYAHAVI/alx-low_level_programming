#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - print 16 digits of base 16 using putchar
 *
 * Return: always (0)
 *
 */

int main(void)
{
	int x;
	int y;

	for (x = 48 ; x <= 57 ; x++)
	{
		putchar(x);
	}
	for (y = 97 ; y <= 102 ; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
