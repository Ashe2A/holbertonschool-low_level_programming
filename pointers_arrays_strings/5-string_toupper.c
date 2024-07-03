#include "main.h"
#include "2-strlen.c"

/**
 * string_toupper - upper all lower
 * @c: string to upper
 * 
 * Return: uppered string
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0 ; i < _strlen(c) ; i++)
	{
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] += ('A' - 'a');
        }
    }

    return (c);
}