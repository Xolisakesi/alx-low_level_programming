#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers1
 * from n - 98
 * @n: parameter passed to function
 * Return: Always void (sucess)
 **/
void print_to_98(int n)
{
int step = (n <= 98) ? 1 : -1;

while (n != 98)
{
printf("%d, ", n);
n += step;
}
printf("%d\n", n);
}
