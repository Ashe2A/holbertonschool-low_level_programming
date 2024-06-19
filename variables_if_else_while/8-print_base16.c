#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print base 16 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}

	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
