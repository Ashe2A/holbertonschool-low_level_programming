#include "main.h"

/**
 * times_table - time tables
 *
 */

void times_table(void)
{
int i, j;

for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
if (j != 0)
{
_putchar(' ');
}
if (i * j < 10)
{
_putchar(' ');
}
else
{
_putchar(((i * j) / 10) + '0');
}
_putchar(((i * j) % 10) + '0');
if (j == 9)
{
_putchar('\n');
}
else
{
_putchar(',');
}
}
}
}
