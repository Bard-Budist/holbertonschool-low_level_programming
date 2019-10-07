#include "holberton.h"
/**
 *
 *
 *
 *
 *
 *
*/
char *_strchr(char *s, char c)
{
int i = 0;
char *t;
while(s[i] != '\0')
{
if (s[i] == c)
{
s+=i;
t = s;
break;
}
else
t = ((void*)0);
i++;
}
return t;
}
