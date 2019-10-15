#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - ...
 * @width: .
 * @height: j
 * Return: value
 */
int **alloc_grid(int width, int height)
{
int **arr;
if (width < 0 || height < 0)
return (NULL);
int i, j;
arr = malloc(width + 1  * (sizeof(int *)));
for (i = 0; i < width; i++)
arr[i] = malloc(height * (sizeof(int)));
if (arr == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}