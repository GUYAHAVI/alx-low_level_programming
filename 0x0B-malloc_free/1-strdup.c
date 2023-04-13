#include "main.h"
#include <stdlib.h>

/**
*_strdup- returns a pointer to a newly
*allocated space in memory, which contains
*a copy of the string given as a parameter
*
*@str: string to duplicate
*Return: Returns NULL if str = NULL
*On success, the _strdup function returns a
*pointer to the duplicated string.
*It returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	int x;
	int y;
	char *s;

	y = 1;
	if (str == NULL)
		return (NULL);
	while (str[y])
	{
		y++;
	}
	s = malloc((y * sizeof(char)) + 1);
	if (s == NULL)
		return (NULL);
	for (x = 0 ; x < y ; x++)
	{
		s[x] = str[x];
	}
	s[x] = '\0';
	return (s);
}
