#include "main.h"
/**
 * print_sign - checks if number is negative, positive
 * otherwise zero
 *
 *@n: parameter passed to function
 *
 * Return: 1 if posive 0 for zero and -1 for negative
 *
 **/
int print_sign(int n)
{
	int num = n;

	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
