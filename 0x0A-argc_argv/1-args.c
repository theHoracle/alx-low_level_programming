#include <stdio.h>
/**
 * main - print no of arguments given
 * @argc: arg coiunt
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
