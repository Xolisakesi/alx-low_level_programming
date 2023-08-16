#include "main.h"
/**
 * print_to_98 - prints all natural numbers1
 * from n - 98
 * @n: parameter passed to function
 * Return: Always void (sucess)
 **/
void print_to_98(int n)
{
	int i, j;

	j = n;
	if (j < 98)
	{
		for (i = j; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = j; i >= 98; i--)
		{
			if (i != 98)
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
