#include "main.h"
#include<stdio.h>
/**
* _puts - prints charactors
* @str: sting argument
* Return: void nothing
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
