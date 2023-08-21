#include "main.h"
/**
 * puts2 - prints charators of a string starting
 * with the first charactor
 * @str: pointer to string argument
 * Return: void nothing
 */
void puts2(char *str)
{
int i, len = 0;

for (i = 0; str[i] != '\0'; i++)
{
len++;
}
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
