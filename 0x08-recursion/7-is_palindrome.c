#include "holberton.h"
#include <stdio.h>
int end(char *t);
int combine(char *s, char *t, int n);

/**
 * is_palindrome - Palin
 * @s: Parameter string
 *
 * Return: int
 *
*/
int is_palindrome(char *s)
{
char *t = s;
int n = (end(t));
t = t + (n - 1);
if (s == 0 && t == 0)
	return (1);
if (*s != *t)
	return (0);
return (combine(s, t, n));

}
/**
 * end - Set pinter in end string
 * @t: Pointer parameter
 * Return: int
*/
int end(char *t)
{
	int c = 0;
if (t[c] != '\0')
{
	c++;
	return (c + end(t + 1));
}
else
	return (0);
}
/**
 * combine - Combine
 * @s: String
 * @t: String 2
 * @n: Size of string
 * Return: :D
*/

int combine(char *s, char *t, int n)
{
if (n > 0)
{
	return (combine(s + 1, t - 1, n - 1));
}
if (*s == *t)
	return (1);
return (0);

}
