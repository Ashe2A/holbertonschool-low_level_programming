#include <stdio.h>

/**
 * main - print alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	
	return (0);
}
