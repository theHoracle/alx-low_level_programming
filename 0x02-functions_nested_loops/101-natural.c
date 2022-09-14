#include <stdio.h>
#include "main.h"
/**
 * main - Entry pont
 * compute sum of natural no
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 1024, sum, count;

	sum = 0;
	count = 0;
	while (count < num)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum += count;
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
