#include "main.h"
/**
 * _isalpha - Entry point
 * @c: check case for c
 * Return: 1 if c is alpha else 0
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
