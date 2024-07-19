#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int op_res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])) == 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_res = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", op_res);

	return (0);
}
