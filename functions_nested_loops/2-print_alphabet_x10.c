#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - Prints lowercase alphabet ten times
 *
 * Return: 0
 */
int print_alphabet_x10(void)
{
int rep;
for (rep = 0 ; rep < 10 ; rep++)
{
print_alphabet();
}
return (0);
}
