#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Print all
 * @format: Format
 *
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list list;

	va_start(list, format);
	char *cadena;

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			cadena = va_arg(list, char*);
			if (cadena == NULL)
			{
				printf("(nil)");
				break;
			}
				printf("%s", cadena);
			break;
		default:
			break;
		}
		char c = format[i];

		if (format[i + 1] && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
}
