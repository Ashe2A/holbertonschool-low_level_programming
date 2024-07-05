#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first str
 * @s2: second str
 *
 * Return: first diff char diff
 */
int _strcmp(char *s1, char *s2)
{
	int i=0;

	while (i = 0 ; (s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
