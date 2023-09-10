#include <stdio.h>
/**
 * main - finds and prints first 98 fibonichi numbers
 * Return: always 0 sucess
 */

int main(void)
{
unsigned long j = 1, k = 2;
int i = 0;

printf("%lu", j);
for (; i < 97; ++i)
{
printf(", %lu", k);
k += j;
j = k - j;
}
printf("\n");
return (0);
}
