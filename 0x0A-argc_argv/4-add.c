#include <stdio.h>
/**
 * main - add up no
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, sum;

	if (argc < 2)
	{
		printf("%d\n", i);
		return (0);
	}
	while (argv[i])
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		printf("%d\n", sum);
		i++;
	}

	return (0);
}
