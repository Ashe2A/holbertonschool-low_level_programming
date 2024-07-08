#include "main.h"

/**
 * create_array -
 */
char *create_array(unsigned int size, char c)
{
    int i;
    char *a;

    if (size <= 0)
    {
        return (NULL);
    }

    a = malloc(sizeof(char) * size);

    for (i = 0 ; i < size ; i++)
    {
        a[i] = c;
    }

    return (a);
}