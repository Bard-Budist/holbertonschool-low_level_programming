#include "holberton.h"
/**
 * swap_int - change value of 2 parameter
 * @a: first parameter
 * @b: second parameter
 *
*/
void swap_int(int *a, int *b)
{
	int c = a;
	*a = b;
	*b = c;
}
