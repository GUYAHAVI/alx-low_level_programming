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

	for (x = 97 ; x <= 122 ; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}


