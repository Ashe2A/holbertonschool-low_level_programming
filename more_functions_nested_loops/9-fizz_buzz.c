#include "main.h"
#include <stdio.h>

/**
 * main - fizzbuzz test
 */

void main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%d", i);
		}
		
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		
		if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		printf(" ");
	}
	printf("\n");
}
