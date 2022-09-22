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
	int i2, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		/** lets do it boyo */
	}

	for (i2 = 0; i2 < n && str[i2] != '\0'; i2++)
	{
		dest[i + i2] = src[i2];
	}

	dest[i2 + 1] = '\0';

	return (dest);
}
