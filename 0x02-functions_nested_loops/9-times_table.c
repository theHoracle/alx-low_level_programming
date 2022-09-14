#include <stdio.h>
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
				printf("%d", val);
			if (hor != 0 && val < 10)
				printf(",  %d", val);
			else
			{
				printf(", %d", val);
			}
			hor++;
		}

		putchar('\n');
		vert++;
	}
}
