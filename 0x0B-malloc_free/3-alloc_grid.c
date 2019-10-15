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
if (width <= 0 || height <= 0)
return (NULL);
else
{
int i, j;
int **arr = (int **)(malloc(height * (sizeof(int *))));
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = (int *) (malloc(width * (sizeof(int))));
if (arr[i] == NULL)
{
for (j = i; j >= 0;j--)
{
free(arr[i]);
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
