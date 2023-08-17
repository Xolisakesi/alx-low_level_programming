#include <stdio.h>
/**
 * main - finds and prints largest prime factor
 *
 * Return: Always 0 secess
 */

int main(void)
{
long long number = 612852475143;
long long factor = 2;

while (number > 1)
{
if (number % factor == 0)
{
number /= factor;
}
else
{
factor++;
}
}

printf(" %lld\n", factor);

return (0);
}

