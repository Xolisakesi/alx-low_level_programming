#include <stdio.h>
/**
 * main - Prints two digit numbers 00 to 99
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = 1 + i; j < 100; j++)
{
if (i != j)
{
printf("%02d %02d", i, j);
}
if (i != 98 || j != 99)
{
putchar(',');
}
}
}
putchar('\n');
return (0);
}
