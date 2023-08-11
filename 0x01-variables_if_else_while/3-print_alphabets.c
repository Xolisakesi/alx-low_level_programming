#include <stdio.h>
/**
 * main - print lower case followed
 * by uppercase charactors
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
