#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - print lowercase alphabets in reverse
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int x;

	for (x = 122 ; x >= 97; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
