#include "main.h"
/**
 * print_rev - fumction prints a string in reverse
 * @s: Pointer to string
 * Return: void nothing
 */
void print_rev(char *s)
{
int len = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
for (j = len -1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
