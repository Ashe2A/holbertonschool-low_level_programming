#include "main.h"

/**
 * more_numbers - prints all digits
 */
void more_numbers(void)
{
	int i, j, k;

	for (k = 0 ; k < 10 ; k++)
	{
		for (i = '0' ; i <= '1' ; i++)
		{
			for (j = '0' ; j <= '9' ; j++)
			{
				if (!(i >= '1' && j > '4'))
				{
					if (i > 0)
					{
						_putchar(i);
					}		
					_putchar(j);
				}
			}
		}

		_putchar('\n');
	}
}
