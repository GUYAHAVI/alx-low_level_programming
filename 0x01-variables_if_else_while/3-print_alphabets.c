#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - prints alphabet in upper and lowercase
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int x;

	for (x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(tolower(x));
	}
	for (x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

