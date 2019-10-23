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
	int  num1, num2;
	int (*funcion)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	funcion = get_op_func(argv[2]);
	if (funcion == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	int resul = funcion(num1, num2);

	printf("%i\n", resul);
	return (0);
}
