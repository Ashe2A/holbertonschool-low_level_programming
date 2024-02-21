#include <stdio.h>

/**
 * main - Lists all lowercase letters
 * abcd - Each letterx
 *
 * Return: 0
 */
int main(void)
{
char abcd;
for (abcd = 'a' ; abcd <= 'z' ; abcd++)
{
putchar(abcd);
}
for (abcd = 'A' ; abcd <= 'Z' ; abcd++)
{
putchar(abcd);
}
putchar('\n');
return (0);
}
