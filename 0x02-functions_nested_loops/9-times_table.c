#include "main.h"
/**
 * times_table - print times table 
 *
 * Return: void
 */
void times_table(void)
{
	int vert, hor, val;

	vert = 0;
	while (vert < 10)
	{
		hor = 0;
		while (hor < 10)
		{
			val = hor * vert;
			if (hor == 0)
				_putchar('0' +  val);
			if (hor != 0 && val < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(val + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(val + '0');
			}
			hor++;
		}

		putchar('\n');
		vert++;
	}
}
