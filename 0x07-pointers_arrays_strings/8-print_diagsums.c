#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Sums diagonal
 * @a: Parameter a
 * @size: size of array
 *
 *
*/
void print_diagsums(int *a, int size)
{
int i, j, d1 = 0, d2 = 0;
for (i = 0; i < size; i++)
d1 += a[(size + 1) * i];
for (j = 0; j < size; j++)
d2 += a[(size - 1) * (j + 1)];
printf("%d, %d\n", d1, d2);


}
