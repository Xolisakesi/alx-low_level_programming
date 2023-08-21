#include "main.h"
/**
 * puts2 - prints charators of a string starting
 * with the first charactor
 * @str: pointer to string argument
 * Return: void nothing
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
