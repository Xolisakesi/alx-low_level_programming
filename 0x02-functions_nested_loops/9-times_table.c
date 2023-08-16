#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Return: Always 0 (sucess)
 *
 **/
void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			r = j * i;
		if (r < 10)
		{
			_putchar(' ');
		}
		else
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
