#include <stdio.h>
/**
 * main - Prints numbers 0 t0 9
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
