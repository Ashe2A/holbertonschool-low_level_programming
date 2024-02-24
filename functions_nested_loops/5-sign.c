#include "main.h"

/**
 * print_sign - Signs a number
 * @n: The number
 *
 * Return: the sign
 */

int print_sign(int n)
{
if (n > 0)
{
return ('+');
}
else if (n < 0)
{
return ('-');
}
else
{
return ('0');
}
}
