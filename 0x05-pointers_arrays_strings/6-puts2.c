#include "main.h"
/**
 * puts2 - entry point
 * @str: print everuy other string starting from the first(even index)
 * return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
