#include "main.h"
/**
 * main - prints _puchar using only _putchar function
 *
 * Return: Always 0 (sucess)
 **/
int main(void)
{
	char n[9] = "_putchar";
	int i;

	for (i  = 0; i  <= 7; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}
