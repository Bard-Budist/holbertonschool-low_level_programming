#include <stdlib.h>

int main()
{
  int i, j;
  for(i=00;i<=99;i++)
  {
    for(j=00;j<=99;j++)
      {
	putchar(i);
	putchar(' ');
	putchar(j);
	putchar(',');
	putchar('\n');
      }
  }
}
