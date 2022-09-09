#include <stdio.h>
/**
 * main - Entry point
 * print all no from 0 - 9
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%i", num);
		num++;
	}

	putchar('\n');
	return (0);
}
