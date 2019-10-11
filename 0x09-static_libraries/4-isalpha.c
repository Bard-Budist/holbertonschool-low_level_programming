#include "holberton.h"
/**
 * _isalpha - return alpah
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _isalpha(int c)
{
int retorn = ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? 1 : 0;
return (retorn);
}
