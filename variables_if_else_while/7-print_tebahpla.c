#include <stdio.h>

/**
 * main - Lists all lowercase letters backwards
 * zyxw - Each lowercase letters
 *
 * Return: 0
 */
int main(void)
{
char zyxw;
for (zyxw = 'z' ; zyxw >= 'a' ; zyxw--)
{
putchar(zyxw);
}
putchar('\n');
return (0);
}
