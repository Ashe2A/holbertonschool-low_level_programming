#include "main.h"
#include "2-strlen.c"

/**
 * print_chessboard - print chessboard
 * @a: chessboard
 */
void print_chessboard(char (*a)[8])
{
    int i, j, k, l;

    for (i = 0 ; i < _strlen(a); i++)
    {
        for (j = 0 ; j < _strlen(a); j++)
        {
            _putchar(a[i][j]);
        }
        _putchar('\n');
    }
}
