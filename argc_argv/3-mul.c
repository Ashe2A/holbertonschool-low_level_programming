#include <stdio.h>

/**
 * main - multiply arguments
 * @argc: Arguments count
 * @argv: Arguments array
 *
 * Return: 0 (Success), 1 (Error if more than 2 args)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error");
		return (1);
	}

	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
