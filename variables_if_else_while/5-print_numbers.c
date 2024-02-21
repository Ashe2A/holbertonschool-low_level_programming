#include <stdio.h>

/**
 * main - Lists 0-9
 * zn - Each number
 *
 * Return: 0
 */
int main(void)
{
char zn;
for (zn = '0' ; zn <= '9' ; zn++)
{
putchar(zn);
}
putchar('\n');
return (0);
}
