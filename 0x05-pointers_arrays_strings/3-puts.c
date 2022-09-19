#include "main.h"
/**
 * _puts - entry point
 * @str : takes string and print to stdout
 * return: none
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
