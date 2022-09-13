#include "main.h"
/**
 * main - Entry point
 * function - print something
 * Return: 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
