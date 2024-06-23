#include "main.h"

/**
 * more_numbers - prints all digits
 */
void more_numbers(void)
{
	int i, j;

	for (i = '0' ; i <= '1' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			if (!(i >= '1' && j > '4'))
			{
				_putchar(i);
				_putchar(j);
			}
		}
	}

	_putchar('\n');
}
