#include "main.h"
/**
 * print_line - function draws a straight line
 * on the terminal
 * @n: number of times char should be printed
 * on the console
 * Return: nothing (void)
 */
void print_line(int n)
{

while (n-- > 0)
{
_putchar('_');
}
_putchar('\n');
}
