#include "holberton.h"
/**
  * _islower - writes the character c to stdout
  * @c: int parameter
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
*/
int _islower(int c)
{
int retorn = 0;
if (c >= 97 && c <= 122)
retorn = 1;
return (retorn);
}
