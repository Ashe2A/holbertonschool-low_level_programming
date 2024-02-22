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
for (zn = 0 ; zn <= 9 ; zn++)
{
putchar(zn + 48);
if (zn == 9)
{
}
else
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
