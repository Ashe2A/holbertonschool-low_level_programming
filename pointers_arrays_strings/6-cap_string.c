#include "main.h"
#include "2-strlen.c"

/**
 * cap_string - capitalize words
 * @c: string to process
 *
 * Return: capitalized words string
 */
char *cap_string(char *c)
{
	int i;

	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] += ('A' - 'a');
	}

	for (i = 1 ; i < _strlen(c) ; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z'
		&& (c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == '\n'
		|| c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.'
		|| c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '\"'
		|| c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{'
		|| c[i - 1] == '}'))
		{
			c[i] += ('A' - 'a');
		}
	}

	return (c);
}
