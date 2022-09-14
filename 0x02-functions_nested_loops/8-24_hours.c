#include "main.h"
/**
 * jack_bauer - ENtry point
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour1, hour2, min1, min2, day_end = 9;
       	hour1 = 0;
	while (hour1 <= 2)
	{
		if (hour1 == 2)
			day_end = 3;
		hour2 = 0;
		while (hour2 <= day_end)
		{
			min1 = 0;
			while (min1 <= 5)
			{
				min2 = 0;
				while (min2 <= 9)
				{
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
					min2++;
				}
				min1++;
			}
			hour2++;
		}
		hour1++;
	}
}
