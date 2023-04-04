#include "main.h"

/**
*_memcpy- copies a section of the memory
*@src: source memory area
*@dest: destination memory area
*
*@n:number of bytes to be copied
*Return:return the copied memory location
*
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0 ; r < i ; r++)
	{
		dest[r] = src[r];
		n++;
	}
	return (dest);
}
