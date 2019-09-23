#include "holberton.h"

int print_last_digit(int c)
{
	int i = (c > 0)?c % 10 : (c * -1) % 10;
	_putchar(i + '0');
	return i;
}
