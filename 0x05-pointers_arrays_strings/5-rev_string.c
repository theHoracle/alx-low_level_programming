#include "main.h"
/**
 * rev_string - function to reverse string
 * @s: reverse str
 * return: void
 */
void rev_string(char *s)
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
}
