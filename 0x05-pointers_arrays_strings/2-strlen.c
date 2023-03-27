#include "main.h"

/**
*_strlen- prints the length of a string
*
*@str: string whose length is needed
*
*Return: length of a string
*
*/
size_t _strlen(const char *str)
{
size_t length = 0;

while (*str++)
length++;

return (length);
}

