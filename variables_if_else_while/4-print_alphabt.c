#include <stdio.h>

/**
 * main - Lists all lowercase letters except e and q
 * abcdf - Each lowercase letters
 *
 * Return: 0
 */
int main(void)
{
char abcdf;
for (abcdf = 'a' ; abcdf <= 'z' ; abcdf++)
{
if (abcdf == 'e' || abcdf == 'q')
{
}
else
{
putchar(abcdf);
}
putchar('\n');
return (0);
}
