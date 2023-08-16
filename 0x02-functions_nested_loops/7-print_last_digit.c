#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 *@n: parameter passed to function
 *
 * Return: Always last digit (sucess)
 **/
int print_last_digit(int n)
{
	int num = n;
	int i = num % 10;

	if (i  < 0)
	{
		i = i * -1;
	}

	_putchar(i + '0');

	return (i);
}
