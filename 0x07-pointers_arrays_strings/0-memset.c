#include "main.h"
#include <string.h>
/**
*_memset -fills the memory with a constant bit
*@s:pointer to memory
*@b:desired character to occpy memory
*@n:number of bytes to be changed
*Return: Returns a pointer to the memory area s
*
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

