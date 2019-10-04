#include "holberton.h"
/**
 * cap_string - Capitalize String
 * @n: Parameter of String
 *
 * Return: Char
 *
 *
 */
char *cap_string(char *n)
{
int i = 0, c;
while (n[i] != '\0')
{
c = n[i];
if (c == ',' || c == ';' || c == '.' || c == '!' || c == '?'
	|| c == '"' || c == '(' || c == ')' || c == '{'
	|| c == '}' || c == ' ' || c == '\t' || c == '\n')
{
if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
n[i + 1] -= 32;
}
i++;
}

return (n);
}
