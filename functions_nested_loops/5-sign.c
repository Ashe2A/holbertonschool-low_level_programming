#include "main.h"

/**
 * print_sign - Signs a number
 * @n: The number
 *
 * Return: 1 if pos, -1 if neg, 0 if zero
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
