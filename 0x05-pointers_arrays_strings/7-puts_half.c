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
for (j = (len - 1) / 2 ; j <= len - 1; j++)
{
if ((len - 1) % 2 == 0)
{
_putchar(str[j]);
}
else
{
_putchar(str[j + 1]);
}
}
_putchar('\n');
}
