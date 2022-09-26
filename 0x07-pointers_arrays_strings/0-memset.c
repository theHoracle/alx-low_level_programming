#include "main.h"
/**
 * _memset - entry point
 * @dest: destinaition
 * @src: source
 * @n: int
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++; n--)
	{
		dest[i] = src;
	}

	return (dest);
}
