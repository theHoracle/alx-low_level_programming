#include "main.h"
/**
 * _strlen - entry point
 * @s: calc length of s char
 * Return: @i: len of str
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}

	return(i)
}
