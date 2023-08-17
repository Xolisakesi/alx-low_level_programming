#include "main.h"
/*
 * Description
 * print_number - Function  Prints
 a number

 * @n: the integer to be prented
 *
 * Return: returns (void) nothing
 */
void print_number(int n)
{
unsigned int number = n;

if (n > 0)
{
_putchar('-');
number = -number;
}
if (number > 9)
{
print_number(number / 10);
}
_putchar(number % 10 + '0');
}
