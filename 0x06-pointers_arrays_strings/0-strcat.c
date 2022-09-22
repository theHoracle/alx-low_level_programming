#include "main.h"
/**
 * _strcat - strcat
 * @dest: src is appended to the src str
 * @src: str in appended to dest
 * return: pointer to the resulting str
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		/* get the length of dest */
	}


	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
