#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - Last digit
 * @n: The number
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
return (_abs(n) % 10);
}
