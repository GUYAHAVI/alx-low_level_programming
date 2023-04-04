#include "main.h"
#include <string.h>

/**
*_strchr- finds a character in a string
*
*@s: pointer to the character in a string
*@c: character to be found
*
*Return: return a pointer to the first occurence
*of the character or NULL if the character ins not
*present
*
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}

