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
int sum = 0, i = 0;
if (argc == 1)
printf("0\n");
else
{
while (argc--)
{

if ((*argv[i] > 'a' && *argv[i] <= 'z')  ||
		(*argv[i] > 'A' && *argv[i] <= 'Z')
		|| *argv[i] == '-')
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
