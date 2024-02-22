#include "main.h"

/**
 * main - Prints lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{
char abcd[52] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0 ; i <= 25 ; i++)
{
_putchar(abcd[i]);
}
_putchar(10);
return (0);
}
