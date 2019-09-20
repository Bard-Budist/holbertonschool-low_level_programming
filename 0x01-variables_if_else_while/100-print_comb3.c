#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
int i, n;
for (n = 1; n < 90; n++) {
while(n < 90) {
if (i / 10 % 10 > i % 10)
break;
if ((i /= 10) == 0) {
putchar(n + '0');
if (n != 89) {
putchar(',');
putchar(' ');
}
break;
}
}
}
}
