#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer
 * @b: pointer to data
 * @size: size of buffer
 * Return: void nothing
 */
void print_buffer(char *b, int size)
{
static int j, k, i, c;
if (size <= 0)
{
return;
}
while (size > k)
{
j = size - k < 10 ? size - k : 10;
printf("%08x", k);
for (i = 0; i < 10; i++)
{
if (i < j)
printf("%02x", *(b + k + i));
else
printf(" ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < j; i++)
{
c = *(b + k + i);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
k += 10;
}
}
