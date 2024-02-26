#include "main.h"

/**
 * more_numbers - all numbers to 14
 */

void more_numbers(void)
{
  int i, j;

for (i = '0' ; i <= '9' ; i++)
{
for (j = '0' ; j <= '4' ; j++)
{
if (i != '0')
{
_putchar(i);
}
_putchar(j);
}
}
_putchar('\n');
}
