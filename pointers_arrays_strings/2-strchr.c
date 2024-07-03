#include "main.h"
#include "2-strlen.c"

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

	for (i = 0; s[i] != c; i++)
	{
	}

	return (s + i);
}