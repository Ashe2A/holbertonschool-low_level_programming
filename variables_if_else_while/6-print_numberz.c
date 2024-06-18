#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print base 10 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + 48);
		// 48 is the DECIMAL ascii code for character 0
	}

	putchar('\n');

	return (0);
}
