#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subracts 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -  divides 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - gets remainder of division of 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
