#include <stdio.h>
#include "../pointers_arrays_strings/100-atoi.c"

/**
 * main - multiply arguments
 * @argc: Arguments count
 * @argv: Arguments array
 *
 * Return: 0 (Success), 1 (Error if more than 2 args)
 */
int main(int argc, char *argv[])
{
	if (argc != 2 + 1)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
