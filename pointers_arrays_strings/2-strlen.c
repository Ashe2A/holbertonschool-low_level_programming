#include "main.h"

/**
 * _strlen - string length
 * @s: string (pointer of char)
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
