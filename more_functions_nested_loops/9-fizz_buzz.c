#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - fizz buzz
 */
void main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}

			if (i % 5 == 0)
			{
				pritnf("Buzz");
			}
		}
	}
	
	_putchar('\n');
}
