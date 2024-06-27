#include "2-strlen.c"
#include "main.h"

/**
 * _atoi - string to int
 * @s: string to convert
 *
 * Return: int result
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int res = 0;
	int intfound = 0;

	for (i = 0 ; i < _strlen(s) ; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
			intfound = 1;
		}
		else if (s[i] == '-' && intfound == 0)
		{
			sign *= -1;
		}
		else
		{
			break;
		}
	}

	return (res * sign);
}
