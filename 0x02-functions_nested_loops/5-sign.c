#include "main.h"
/**
 * print_sign - Entry point
 * @n: check if +ve or -ve or 0
 * Return: 1 if n is +ve else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
