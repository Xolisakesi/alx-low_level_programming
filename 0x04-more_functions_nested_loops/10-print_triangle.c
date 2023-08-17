#include "main.h"
/**
 * print_triangle - function prints a triangle
 *
 * @size: triangle size
 *
 * Return: nothing (void)
 */
void print_triangle(int size)
{
int i, j, k;

for (i = 1; i <= size; i++)
{
for (j = size; j > i; j--)
{
_putchar(' ');
}
for (k = 1; k <= j; k++)
{
_putchar('#');
}
_putchar('\n');
}
if (size == 0)
{
_putchar('\n');
}
}
