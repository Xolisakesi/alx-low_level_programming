#include "main.h"
/**
 * main - prints _puchar using only _putchar function
 *
 * Return: Always 0 (sucess)
 **/
int main(void)
{
	char n[] = "_putchar";

	for (int i = 0; n[i] != '\0'; i++)
	{
		_putchar(n[i]);
	}
	return (0);
}
