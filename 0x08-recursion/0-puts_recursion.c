#include "main.h"
/**
 * _puts_recursion - puts string recursively
 * @str: string to be printed to stdout
 * Return: void
 */
void _puts_recursion(char *str)
{
	if (str == '\0')
	{
		_putchar('\n');
	}
	_putchar(*str);
	_puts_recursion(str + 1);
}
