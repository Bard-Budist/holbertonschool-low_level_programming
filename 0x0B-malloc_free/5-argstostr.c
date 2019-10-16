#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * argstostr - punt
  * @ac: intero
  * @av: char
  * Return: p
  */
char *argstostr(int ac, char **av)
{
int a, b, c = 0, d = 0;
char *p;
if (ac == 0)
	return (NULL);
if (av == NULL)
	return (NULL);
for (a = 0; a < ac; a++)
{
	for (b = 0; av[a][b] != '\0'; b++)
	{
		c++;
	}
	c++;
}
c++;
p = malloc(sizeof(char) * c);
if (p == NULL)
	return (NULL);
for (a = 0; a < ac; a++)
{
	for (b = 0; av[a][b] != '\0'; b++)
	{
		p[d++] = av[a][b];
	}
	p[d++] = '\n';
}
p[d] = '\0';
return (p);
}
