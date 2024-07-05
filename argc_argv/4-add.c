#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply arguments
 * @argc: Arguments count
 * @argv: Arguments array
 *
 * Return: 0 (Success), 1 (Error if more than 2 args)
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(argv[i]);
		}

		printf("%d\n", add);
		return (0);
	}
}
