#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
* print_all - function that print strings
* @format: list of arguments c, i, f, *s
* Return: -vacio
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	char *string;
	va_list valist;
	while (format && format[i])
	{
		va_start(valist, format);
		while (format[i])
		{
			j = 1;
			switch (format[i++])
			{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				string = va_arg(valist, char *);
				if (string == NULL)
				{
					string = "(nil)";
				}
				printf("%s", string);
				break;
			default:
					j = 0;
					break;
			}
		if (format[i] && j)
		{
		printf(", ");
		}
	}
	va_end(valist);
	}
	printf("\n");
}
