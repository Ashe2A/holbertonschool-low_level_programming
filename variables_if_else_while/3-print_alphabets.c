#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
