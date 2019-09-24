#include "holberton.h"
/**
 * jack_bauer - writes the character c to stdout
 *
 * On error, -1 is returned, and errno is set appropriately.
*/
void jack_bauer(void)
{
	int i, k, o, p, j;
	int n;
	for (n = 0; n <= 23 ; n++)
	{
		for (j = 0; j <= 59 ; j++)
		{
			i = n / 10;
			k = n % 10;
			o = j / 10;
			p = j % 10;
			_putchar(i + '0');
			_putchar(k + '0');
			_putchar(':');
			_putchar(o + '0');
			_putchar(p + '0');
			_putchar('\n');
		}
	}
}
