#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints nxtable
 * @n: parameter passed to the function
 * Return: Always 0 (sucess)
 **/

void print_times_table(int n)
{
int i, j, k;

if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
if (j == 0)
_putchar('0' + k);
else if (k < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k >= 10 && k <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
}
