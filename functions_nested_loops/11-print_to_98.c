#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - all numbers to 98
 * @n: interval start
 */

void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n ; i >= 98 ; i--)
{
printf("%d", i);
if (i == 98)
{
printf("\n");
}
else
{
printf(", ");
}
}
}
else
{
for (i = n ; i <= 98 ; i++)
{
printf("%d", i);
if (i == 98)
{
printf("\n");
}
else
{
printf(", ");
}
}
}
}
