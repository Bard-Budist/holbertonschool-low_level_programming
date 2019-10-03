#include "holberton.h"
/**
 * reverse_array - Reverse array
 * @a: Parameter f int
 * @n: Paremeter of int
 *
 *
*/
void reverse_array(int *a, int n)
{
int i, k;
int c;
n = n - 1;
for (i = n; i > (n / 2); i--)
{
c = a[i];
k = n - i;
a[i] = a[k];
a[k] = c;

}

}
