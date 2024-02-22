#include "main.h"

/**
 * main - Prints underscore putchar
 *
 * Return: 0
 */
int main(void)
{
char upc[17] = "_putchar";
int i;
for (i = 0 ; i <= 8 ; i++)
{
_putchar(upc[i]);
}
_putchar('\n');
return (0);
}
