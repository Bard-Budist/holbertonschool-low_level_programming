#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
*/
int main(int argc, char *argv[])
{
int i = 0;
while (--argc)
i++;
*argv[0] = i;
printf("%i\n", *argv[0]);
return (0);
}
