#include <stdio.h>
/**
 * main - computes and prints the sum of all the
 * multiples of 3 and 5 below 1024
 * Return: Alyways 0 sucess
 */
int main(void)
{
unsigned long sum = 0;
int i = 0;

for (; i < 1024; ++i)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%lu\n", sum);
return (0);
}

