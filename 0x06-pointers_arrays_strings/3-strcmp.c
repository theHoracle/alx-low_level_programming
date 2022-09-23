#include "main.h"
/**
 * _strcmp - entry point
 * @s1: first str
 * @s2: econd str
 * Return: compared val
 */
int _strcmp(char *s1, char *s2)
{
	int i, val;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		if (s1[i] == s2[i])
			val = s1[i] - s2[i];
			return (val);
		val = 0;

	return (val);
}
