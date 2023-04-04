#include "main.h"

/**
*_strstr- function finds the first occurrence
*of the substring needle in the string haystack
*
*@needle: string to be found
*@haystack: string having the needle
*
*Return:Returns a pointer to the
*beginning of the located substring,
*or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int j, k;

	for (j = 0 ; haystack[j] != '\0'; j++)
	{
		for (k = 0 ; needle[k] != '\0' ; k++)
		{
			if (haystack[j] == needle[k])
				return (needle);
		}
	}
	return ('\0');
}

