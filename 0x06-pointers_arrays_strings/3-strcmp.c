#include "holberton.h"
/**
 * _strcmp - Compare string
 * @s1: String 1
 * @s2: String 2
 * Return: Return value
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
int band = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] == s1[i])
	band = 1;
	else
	band = 0;
	i++;
}
if (band != 0)
{
	i = 0;
	band = s1[i] - s2[i];
}

return (band);
}
