#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - a
 * @a: Value a
 * @b: Value b
 * Return: Sum of two digits
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtration
 * @a: Value a
 * @b: Value b
 * Return: Sub of two digits
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Mult
 * @a: Value a
 * @b: Value b
 * Return: Mul of two digits
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Div
 * @a: Value a
 * @b: Value b
 * Return: Div of two digits
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Mod
 * @a: Value a
 * @b: Value b
 * Return: Mod of two digits
*/

int op_mod(int a, int b)
{
	return (a % b);
}
