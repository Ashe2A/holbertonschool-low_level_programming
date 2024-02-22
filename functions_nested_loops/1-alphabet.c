#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Return: 0
 */
int print_alphabet(void)
{
int i;
for (i = 0 ; i <= 25 ; i++)
{
_putchar(i+97);
}
_putchar(10);
return (0);
}
