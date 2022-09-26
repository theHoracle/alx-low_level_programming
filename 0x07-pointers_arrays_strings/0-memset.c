#include "main.h"
/**
 * _memset - entry point
 * @s: destinaition
 * @b: source
 * @n: int
 * Return: char
 */
char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
