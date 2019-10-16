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
if (width <= 0 || height <= 0)
return (NULL);
else
{
int i, j;
arr = (malloc(height * (sizeof(int *))));
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = (malloc(width * (sizeof(int))));
if (arr[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(arr[j]);
}
free(arr);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
}
