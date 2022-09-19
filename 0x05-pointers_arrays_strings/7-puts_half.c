#include "main.h"
/**
 * puts_half - print the 2nd half of a string
 * @str: input
 * return: void
 */
void puts_half(char *str)
{
	int len, mid;

	len = 0;
	while (str[len])
	{
		len++;
	}
	if (len % 2 == 0)
		mid = len / 2;
	else
	{
		mid = (len + 1) / 2;
	}
	while (str[mid])
	{
		_putchar(str[mid]);
		mid++;
	}

	_putchar('\n');
}
