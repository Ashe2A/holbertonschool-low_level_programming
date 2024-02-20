#include <stdio.h>

/**
 * main - Lists the size of different types (char, int, long int, long long int, float)
 *
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %ld bytes(s)\n", sizeof(char));
printf("Size of a int: %ld bytes(s)\n", sizeof(int));
printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
printf("Size of a float: %ld bytes(s)\n", sizeof(float));
return (0);
}
