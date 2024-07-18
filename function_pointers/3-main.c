#include "3-calc.h"
#include <stdlib.h>

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
		printf("Error");
		exit(98);
	}

	if (get_op_func(argv[2])(argv[1], argv[3]) == NULL)
	{
		printf("Error");
		exit(99);
	}

	if ((argv[2] == "/" || argv[2] == "%") && argv[3] == 0)
	{
		printf("Error");
		exit(100);
	}

	printf("%d\n", get_op_func(atoi(argv[2]))(argv[1], argv[3]));

	return (0);
}
