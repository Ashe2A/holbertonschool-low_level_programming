#include "main.h"

/**
 * _strlen - length of character string
 * @s: the string
 *
 * Return: length of string, 0 if empty
 */

int _strlen(char *s)
{
	int i;
	int len = 1;

	if ((*s)[0] >= 0 && (*s)[0] <= 255)
	{
		for (i = 0 ; i < len ; i++)
		{
			if ((*s)[i] >= 0 && (*s)[i] <= 255)
			{
				len++;
			}
		}
	}
	else
	{
		len = 0;
	}
	return (len);
}
