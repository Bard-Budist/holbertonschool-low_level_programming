#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Print String
 * @separator: Separator
 * @n: Number of parameter
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *string;

	va_start(list, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(list, char*);
			if (string != NULL)
			{
				printf("%s", string);
				if (i != (n - 1) && separator != NULL)
					printf("%s", separator);
			}
		}
	}
	va_end(list);
	printf("\n");
}
