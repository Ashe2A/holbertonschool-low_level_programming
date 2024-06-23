#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - print times tables 0 to 9
 */

void times_table(void)
{
	int i, j, dix;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (j > 0)
			{
				dix = (i * j) / 10;
				if (dix > 0)
				{
					_putchar('0' + dix);
				}
				else
				{
					_putchar(' ');
				}
			}

			_putchar((i * j) % 10 + '0');
			
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');

			}

		}
		_putchar('\n');
	}

}
