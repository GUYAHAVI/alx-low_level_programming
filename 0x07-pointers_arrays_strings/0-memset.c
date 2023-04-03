#include "main.h"
#include <string.h>
/**
*_memset -fills the memory with a constant bit
*@s:pointer to memory
*@b:number of bytes
*@n:
*Return: Returns a pointer to the memory area s
*
*/
char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(s + i) = *(b + i);
	}
	return (s);
}

