#include "2-strlen.c"
#include "main.h"
#include <stdlib.h>

/**
 * _strcmp - compare strings
 * @s1: first str
 * @s2: second str
 *
 * Return: first diff char diff
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] == s2[i] ; i++)
	{
	}

	return (s1[i] - s2[i]);
}
