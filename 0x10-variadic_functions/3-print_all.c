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
	char *test;
	va_list valist;

	
		va_start(valist, format);
		while (format[i])
		{
			j = 1;
			switch (format[i++])
			{
			case 'c':
				printf("%i", i);
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
			printf("%i", i);
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
			printf("%i", i);
				printf("%f", va_arg(valist, double));
				break;
			case 's':
			printf("%i", i);
				test = va_arg(valist, char *);
				if (test == NULL)
				{
					test = "(nil)";
				}
				printf("%s", test);
				break;
			default:
					j = 0;
					break;
			}
		if (format[i] && j == 1)
		printf(", ");
	
	va_end(valist);
	}
	printf("\n");
}
