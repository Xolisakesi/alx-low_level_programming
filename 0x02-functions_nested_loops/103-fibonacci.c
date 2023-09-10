#include <stdio.h>
/**
 * main - find and print sum of even value
 * terms of febonichi sequence that are less than 4m
 * Return: Always 0 sucess
 */
#include <stdio.h>

int main(void)
{
unsigned long next = 0, sum = 0;
unsigned long a = 1, b = 2;

while (a < 4000000)
{
if (a % 2 == 0)
{
sum += a;
}
next = a + b;
a = b;
b = next;
}
printf("%lu\n", sum);
return (0);
}

