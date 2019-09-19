#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char h;
for (c = 48; c < 58; c++)
putchar(c);
for (h = 97; h < 103; h++)
putchar(h);
putchar('\n');
return (0);
}
