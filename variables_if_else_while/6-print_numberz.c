#include <stdio.h>

/**
 * main - Lists 0-9
 * zn - ASCII code
 *
 * Return: 0
 */
int main(void)
{
int zn;
for (zn = 0 ; zn <= 9 ; zn++)
{
putchar(zn + 48);
}
putchar(10);
return (0);
}
