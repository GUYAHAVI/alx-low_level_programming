#include <stdio.h>
#include <ctype.h>

/**
 * main - prints out a to z in lowercase using putchar
 *
 * Return: always 0(success)
 *
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
		putchar('\n'');
	}
	return (0);
}
