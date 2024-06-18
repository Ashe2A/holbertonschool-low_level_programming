#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabet without e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (!(i == 'e' || i == 'q'))
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
