#include "main.h"
/**
 * _abs - Entry point
 * @n: compute absolute valus
 * Return: abs val
 */
int _abs(int n)
{
	if (n < 0)
		return (n + (n * -2));
	else
		return (n);
}
