#include <stdio.h>
/**
 * main - Print numbers with comas
 *
 * Return: Alaways 0 (sucess)
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
