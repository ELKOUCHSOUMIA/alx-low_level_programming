#include "3-calc.h"

/**
 * op_add - eturns the sum of two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: the first int
 * @b: the second int
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  returns the product of a and b
 * @a: the first int
 * @b: the second int
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: the first int
 * @b: the second int
 *
 * Return: the quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the first int
 * @b: the second int
 *
 * Return: the remaider
 */

int op_mod(int a, int b)
{
	return (a % b);
}
