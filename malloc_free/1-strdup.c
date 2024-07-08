#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * _strdup - copy a string
 * @str: array to copy
 *
 * Return: string copy
 */
char *_strdup(char *str)
{
    int i = 0;
    int j;
    char *strcopy;

    while (*str[i] != '\0')
    {
        i++;
    }

    strcopy = malloc(sizeof(char) * i);

    if (str == NULL)
    {
        return (NULL);
    }

    for (j = 0; j < i; j++)
    {
        strcopy[i] = str[i];
    }

    return (strcopy);
}