#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - Main
 * @argc: Count parameters
 * @argv: Vector parameters
 * Return: Zero
*/
int main(int argc, char **argv)
{
	char *c = NULL;
	c = argv[2];
	int  num1, num2;
	int (*funcion)(int, int);
	if ((argc >= 0 && argc <= 3) || (argv == NULL))
	{
		printf("Error\n");
		exit(98);
	}
	else if (c[0] != '+' && c[0] != '-' && c[0] != '*' && c[0] != '/' && c[0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	else if (c[0] == 47 && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		funcion = get_op_func(c);
		int resul = funcion(num1, num2);
		printf("%i\n", resul);
	}
	return (0);

}
