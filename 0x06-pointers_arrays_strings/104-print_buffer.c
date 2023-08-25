#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - function that prints a buffer
 * @b: pointer to data
 * @size: size of buffer
 * Return: void nothing
 */
void print_buffer(char *b, int size)
{
static int i, j;
if (size <= 0)
{
printf("\n");
return;
}
for (; i < size; i += 10)
{
printf("%08x ", i);
for (j = i; j < i + 10; j += 2)
{
if (j < size)
{
printf("%02x", (unsigned char)b[j]);
if (j + 1 < size)
{
printf("%02x", (unsigned char)b[j + 1]);
}
else
{
printf("  ");
}
printf(" ");
}
else
{
printf("      ");
}
}
printf(" ");
for (j = i; j < i + 10 && j < size; j++)
{
if (isprint(b[j]))
{
printf("%c", b[j]);
}
else
{
printf(".");
}
}
printf("\n");
}
}
