#include "main.h"
/**
 * rev_string - function to reverse string
 * @s: reverse str
 * return: void
 */
void rev_string(char *s)
{
	int len;

	len = _strlen(s);
	while(len != -1)
	{
		_putchar(s[len]);
		len--;
	}
}
