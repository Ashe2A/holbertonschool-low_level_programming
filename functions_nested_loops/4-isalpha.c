#include "main.h"

/**
 * _isalpha - if char is alphabetic
 * @c: the char to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
