#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print form n to 98
 * @n: start here
 * Retun: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 97)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}

		putchar('\n');
	}
	else
	{
		while (n != 99)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}

		putchar('\n');
	}
}
