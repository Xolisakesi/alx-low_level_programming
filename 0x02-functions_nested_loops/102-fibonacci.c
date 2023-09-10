#include <stdio.h>
/**
 * main - prints the first 50 fibonichi numbers
 * starting with 1 and 2
 * Return: Always 0 sucess
 */
#include <stdio.h>

int main(void)
{
long int next, a = 1, b = 2;
int i = 0;

for (; i < 50; ++i)
{
printf("%ld%s", a, (i == 49) ? "\n" : ", ");
next = a + b;
a = b;
b = next;
}
return (0);
}

