#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: the int to check
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
