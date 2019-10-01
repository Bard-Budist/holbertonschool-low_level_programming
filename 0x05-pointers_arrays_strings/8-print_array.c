#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print numbers of array
 * @a: Array
 * @n: Size of array
 *
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%i", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");


}
