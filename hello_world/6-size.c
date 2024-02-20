#include <stdio.h>

/**
 * main - Lists the size of different types (char, int, long int, long long int, float)
 *
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %d bytes(s)\n", sizeof(char));
printf("Size of a int: %d bytes(s)\n", sizeof(int));
printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
printf("Size of a float: %d bytes(s)\n", sizeof(float));
return (0);
}
