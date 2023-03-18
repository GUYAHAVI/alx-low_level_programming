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
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
