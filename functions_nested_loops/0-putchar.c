#include "main.h"
#include <string.h>

/**
 * main - Prints underscore putchar
 *
 * Return: 0
 */
int main(void)
{
char upc[] = "_putchar\n";
size_t i;
for (i = 0 ; i < strlen(upc) ; i++)
{
_putchar(upc[i]);
}
_putchar('\n');
return (0);
}
