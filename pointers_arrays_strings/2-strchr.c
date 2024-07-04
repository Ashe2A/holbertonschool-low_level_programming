#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _strchr - finds a char in a string
 * @s: string to look in
 * @c: char to look for
 *
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
    int i;
    char *u = NULL;

	for (i = 0; (s[i] != c) && (i < _strlen(s)); i++)
	{
	}

	if (i == _strlen(s))
	{
		return (u);
	}
	else
	{
		return (s + i);
	}
}