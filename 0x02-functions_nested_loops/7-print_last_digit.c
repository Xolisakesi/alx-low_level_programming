#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 *@n: parameter passed to function
 *
 * Return: Always 0 (sucess)
 **/
int print_last_digit(int n)
{
	int num = n;
	int i = num % 10;

	_putchar(i);

	return (0);
}
