#include "main.h"
/**
 * print_number - a function that prints an integer.
 * @n: an interger argument passed to the function
 * Return: returns void nothing
 */
void print_number(int n)
{
unsigned int _number;
_number = n;

if (n < 0)
{
_putchar('-');
_number = -n;
}
if (_number / 10 != 0)
{
print_number(_number / 10);
}
_putchar((_number % 10) + '0');
}
