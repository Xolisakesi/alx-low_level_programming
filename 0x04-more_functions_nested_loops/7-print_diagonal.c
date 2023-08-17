#include "main.h"
/**
 * print_diagonal - drawa adiagonal line
 * in the terminal
 * @n: number of times \ will be printed
 * Return: nothing (void)
 */
void print_diagonal(int n)
{
int i, j;


for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (i == j)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}

