#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - print several strings
 * @separator: character to separate the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list strings;
    char *new_str;

    if (separator == NULL)
    {
        separator = "";
    }

    if (n != 0)
    {
        va_start(strings, n);

        for (i = 0; i < n; i++)
        {
            new_str = va_arg(strings, char *);

            if (new_str != NULL)
            {
                printf("%s", new_str);
            }
            else
            {
                printf("%s", "(nil)");
            }

            if (i < n - 1)
            {
                printf("%s", separator);
            }
        }

        va_end(strings);
    }

    printf("\n");
}
