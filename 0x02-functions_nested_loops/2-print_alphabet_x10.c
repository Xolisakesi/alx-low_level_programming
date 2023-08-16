#include "main.h"
/**
 * print_alphabet_x10 - primts 10x alphabets
 *
 * Return: always 0 (sucess)
 **/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

	}
	_putchar('\n');
}
