#include <stdio.h>

/**
 * main - Lists all lowercase letters backwards
 * hex - Each hexadec numbers
 *
 * Return: 0
 */
int main(void)
{
char hex;
for (hex = '0' ; hex <= '9' ; hex++)
{
putchar(hex);
}
for (hex = 'a' ; hex <= 'f' ; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
