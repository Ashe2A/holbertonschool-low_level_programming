#include "main.h"

/**
 * print_sign - Signs a number
 * @n: The number
 *
 * Return: n itself
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else if (n < 0)
{
_putchar('-');
}
else
{
_putchar('0');
}
return (n);
}
