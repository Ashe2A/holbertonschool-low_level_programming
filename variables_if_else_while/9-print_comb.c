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

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
