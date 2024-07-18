#include "3-calc.h"
#include <stdlib.h>

/** op_add - add integers
 * @a: first integer
 * @b: second integer
 * 
 * Return: sum of the integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/** op_sub - substract integers
 * @a: first integer
 * @b: second integer
 * 
 * Return: difference of the integers
 */
int op_sub(int a, int b)
{
    return (abs(a - b));
}

/** op_mul - multiply integers
 * @a: first integer
 * @b: second integer
 * 
 * Return: integers product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/** op_div - divide integers
 * @a: first integer
 * @b: second integer
 * 
 * Return: integers division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/** op_mod - remainder of integers' division
 * @a: first integer
 * @b: second integer
 * 
 * Return: integers' division remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
