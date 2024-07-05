#include "main.h"

/**
 * _strlen_recursion - string length
 * @s: string to treat
 * 
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i++;
		i = _strlen_recursion(s + 1);
		return (i);
	}
}
