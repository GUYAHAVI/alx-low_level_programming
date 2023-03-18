#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - prints single digit numbers of base 10 followed by a new line
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int x;

	while (x < 10)
	{
		putchar(x);
		putchar('\n');
		x++;
	}
	return (0);
}
