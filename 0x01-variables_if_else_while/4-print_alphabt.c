#include <stdio.h>
/**
 * main - Prints letters of alphabets
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
