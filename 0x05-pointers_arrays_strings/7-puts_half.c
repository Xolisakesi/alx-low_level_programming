#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to string argument
 * Return:void nothing
 */
void puts_half(char *str)
{

int i, j, len = 0;

for (i = 0; str[i] != '\0'; i++)
{
len++;
}
if (len % 2 == 0)
{
j = len / 2;
}
else
{
j = (len + 1) / 2;
}
for (; j < len; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
