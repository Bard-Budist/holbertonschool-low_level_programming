#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main function
 * @argc: Number paramets
 * @argv: Array with values
 * Return: 0
 *
*/
int main(int argc, char *argv[])
{
int sum = 0;
if (argc == 1)
printf("0\n");
else
{
while (argc--)
{
if ((*argv[0] > 'a' && *argv[0] <= 'z')  ||
		(*argv[0] > 'A' && *argv[0] <= 'Z'))
{
printf("Error\n");
return (1);
}
sum += atoi(*argv);
argv++;
}
printf("%i\n", sum);
}
return (0);
}
