#include "main.h"

/**
 * more_numbers - all numbers to 14
 */

void more_numbers(void)
{
int i, j, n;

for (n = 0 ; n < 10 ; n++)
{
for (i = '0' ; i <= '1' ; i++)
{
for (j = '0' ; j <= '9' ; j++)
{
if (i == '1' && j > '4')
{
if (i != '0')
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
