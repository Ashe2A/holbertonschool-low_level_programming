#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Tests if an integer ends with 0, 1-5 or 6-9
 * n - integer to test
 *
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("Last digit of %d is ", n);
printf("%d and is greater than 5\n", n % 10);
}
else if (n % 10 == 0)
{
printf("Last digit of %d is ", n);
printf("%d and is 0\n", n % 10);
}
else
{
printf("Last digit of %d is ", n);
printf("%d and is less than 6 and not 0\n", n % 10);
}
return (0);
}
