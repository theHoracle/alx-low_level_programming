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
	while(s[len])
	{
		_putchar(s[len]);
		len--;
	}
}
