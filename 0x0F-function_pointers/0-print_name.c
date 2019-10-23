#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -  print name
 * @name: Name
 * @f: Function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}

}
