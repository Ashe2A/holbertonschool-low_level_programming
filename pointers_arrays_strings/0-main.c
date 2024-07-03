#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);

	printf("-------------------------------------------------\n");
	_memset(buffer, 0x01, 95);
	simple_print_buffer(_memset(buffer, 0x01, 95), 98);

	printf("-------------------------------------------------\n");
	_memset(buffer, 0x02, 5);
	simple_print_buffer(_memset(buffer, 0x02, 5), 98);

	return (0);
}
