#include <stdio.h>
#include <ctype.h>

/**
 * main- print all possible combinations of single
 * digit numbers seperated by comma and space
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	int x;

	for (x = 48 ; x <= 57 ; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
