#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: print the last digit
 * Return: val of last digit
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;

	_putchar(nv + '0');
	return (nv);
}
