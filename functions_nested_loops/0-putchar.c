#include "main.h"

/**
 * main - Prints underscore putchar
 * @i: each character of _putchar
 *
 * Return: 0
 */
int main(void)
{
char upc[16] = "_putchar";
int i;
for (i = 0 ; i <= 7 ; i++)
{
_putchar(upc[i]);
}
_putchar(10);
return (0);
}
