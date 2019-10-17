#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - adwad
* @s1: ..
* @s2: ..
* @n: ..
* Return: ..
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, i1 = 0, i2 = 0;
	char *c = s1;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[i1] != '\0')
	{
		i1++;
	}
	while (s2[i2] != '\0')
	{
		i2++;
	}
	i2 = (i2 > n) ? n : i2;
	j = i1 + i2;
	s1 = malloc(j + (n * sizeof(s2)) * sizeof(s1));
	if (s1 == NULL)
	return (NULL);
	for (i = 0; i < i1; i++)
	{
		s1[i] = c[i];
	}
	for (i = 0; i < i2; i++)
	{
		s1[i + i1] = s2[i];
	}
	s1[i + i1] = '\0';
	return (s1);
}
