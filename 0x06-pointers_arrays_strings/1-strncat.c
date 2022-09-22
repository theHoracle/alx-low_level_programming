#include "main.h"
/**
 * _strncat - entry point
 * @dest: destination
 * @src: source
 * @n: num
 * return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		/** lets do it boyo */
	}

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (a >= n)

	dest[a + 1] = '\0';

	return (dest);
}
