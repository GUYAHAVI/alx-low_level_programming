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

	for (x = 'A' ; x <= 'Z' ; x++)
	{
		if (x != q && x != e)
		{
			putchar(tolower(x));
		}
	}
	putchar('\n');
	return (0);
}


