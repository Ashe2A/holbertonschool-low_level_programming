#ifndef WEEK9_PROJECT1
#define WEEK9_PROJECT1

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *);
size_t dlistint_len(const dlistint_t *);
dlistint_t *add_dnodeint(dlistint_t **, const int);
dlistint_t *add_dnodeint_end(dlistint_t **, const int);

#endif
