#include "holberton.h"
/**
 * rev_string - Print String reverse
 * @s: Parameter String
 *
 *
 *
*/
void rev_string(char *s)
{
int l = 0, i;
char *end, *str, c, *p;
end = s;
str = s;
p = s;
while (*p)
{
l++;
p++;
}
for (i = 0; i < l - 1; i++)
end++;

for (i = 0; i < l / 2; i++)
{
c = *end;
*end = *str;
*str = c;

str++;
end--;
}
}
