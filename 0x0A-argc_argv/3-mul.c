#include <stdio.h>
/**
 * main - does multiplicatio of args
 * @argc: arg count
 * @argv: arg vext
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
