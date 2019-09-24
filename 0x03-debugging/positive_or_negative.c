#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * positive_or_negative - Entry point
  * @n: :D
  * Return: Always 0 (Success)
*/

int positive_or_negative(int n)
{
if (n > 0)
printf("%i is positive\n", n);
else if (n == 0)
printf("%i is zero\n", n);
else
printf("%i is negative\n", n);
return (0);
}
