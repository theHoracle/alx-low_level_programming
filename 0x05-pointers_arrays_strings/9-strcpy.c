#include "main.h"
/**
 * *_strcpy - entry
 * @dest: destination for xopied string
 * @src: source of string to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
