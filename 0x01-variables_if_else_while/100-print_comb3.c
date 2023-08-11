#include <stdio.h>
/**
 * main - Prints numbers 00 to 99
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
int a, b;
for (a = '0'; a <= '8'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if ((a != b) && (a < b))
{
putchar(a);
putchar(b);
}
if (((a != '8') || (a == '8' && b != '9')) &&
((a < b) && (a != b)))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
