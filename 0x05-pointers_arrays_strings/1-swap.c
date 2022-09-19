#include "main.h"
/**
 * swap_int - entry point
 * @a : swap with b
 * @b : swap with a
 * return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
