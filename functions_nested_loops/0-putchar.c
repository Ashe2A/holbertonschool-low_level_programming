#include "main.h"

/**
 * main - Prints underscore putchar
 *
 * Return: 0
 */
int main(void)
{
char upc[18] = "_putchar\n";
int i;
for (i = 0 ; i <= 9 ; i++)
{
_putchar(upc[i]);
}
return (0);
}
