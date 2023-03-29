#include "main.h"

/**
* _strncpy- copies a string
*@dest: destination string
*@src: source string
*@n:number of bytes to copy
*
*Return: return pointer to the copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		scr[i] = dest[i];
		i++
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

