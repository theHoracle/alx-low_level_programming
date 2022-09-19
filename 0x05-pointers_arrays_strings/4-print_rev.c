#include "main.h"
/**
 * print_rev - functuion
 * @s: take in input string and reverse
 * return: void
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (s[len])
	{
		_putchar(s[len]);
		len--;
	}

	_putchar("\n");
}
