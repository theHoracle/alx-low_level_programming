#include "main.h"
/**
 * print_rev - functuion
 * @s: take in input string and reverse
 * return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	while (len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
