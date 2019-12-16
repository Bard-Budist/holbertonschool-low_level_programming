#include "list.h"
/**
 * add - Add sum
 * @a: num 1
 * @b: num 2
 * Return: number
*/
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - Sub Resta
 * @a: num 1
 * @b: num 2
 * Return: number
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Add Multiplication
 * @a: num 1
 * @b: num 2
 * Return: number
*/
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - div sum
 * @a: num 1
 * @b: num 2
 * Return: number
*/
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
/**
 * mod - Add sum
 * @a: num 1
 * @b: num 2
 * Return: number
*/
int mod(int a, int b)
{
	return ((a < 0) ? (((a * -1) % b) * -1) : (a % b));
}
