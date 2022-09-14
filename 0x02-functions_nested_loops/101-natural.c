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

	for (count = 0; count < num; count++)
	{
		sum = 0;
		if (count % 3 == 0)
			sum += count;
		if (count % 5 == 0)
			sum += count;
	}
	printf("%d\n", sum);
	return (0);	
}
