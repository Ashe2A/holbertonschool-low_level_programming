#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - print a singly linked list
 * @h: singly linked list
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h);
{
    list_t *new;
    size_t size = 0;

    if (h.str == NULL)
    {
        printf("[0] (nil)\n");
        return (0);
    }
    printf("[%d] %s\n", h.len, h.str);
    if (h.next == NULL)
        return (h.len);
    return (h.len + print_list(h.next));
}
