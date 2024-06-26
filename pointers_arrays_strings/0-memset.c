#include "main.h"
#include <stdio.h>

/**
 * _memset - fills string with n same chars
 * @buffer: string to fill
 * @b: char to input
 * @n: number of chars to fill
 *
 * Return: modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i;

    for (i = 0; i < n && (s[i] != '\0') ; i++)
    {
        s[i] = b;
    }

    return (s);
}