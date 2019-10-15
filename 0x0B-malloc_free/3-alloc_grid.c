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
if (width < 0 || height < 0)
return (NULL);
else
{
int **arr;
int i, j;
arr = malloc(width + 1  * (sizeof(int)));
for (i = 0; i < width; i++)
{
arr[i] = malloc(height * (sizeof(int)));
if (arr[i] == NULL)
{
free(arr[i]);
return (NULL);
}
}
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
}
