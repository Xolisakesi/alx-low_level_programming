#include "main.h"
/**
 * print_alphabet_x10 - primts 10x alphabets
 *
 * Return: always 0 (sucess)
 **/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
	}
	_putchar('\n');
	return (0);

}
