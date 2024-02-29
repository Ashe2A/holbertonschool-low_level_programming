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
	int len = 0;

	for (i = 0 ; i <= s[len] && s[len] != '' ; i++)
	{
		len++;
	}
	return (len);
}
