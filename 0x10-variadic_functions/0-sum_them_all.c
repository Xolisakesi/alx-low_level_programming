#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of
 * all its parameters.
 * @n: number of arguments passed to the function
 * Return: returnsa sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list p;
va_start(p, n);
for (i = 0; i < n; i++)
sum += va_arg(p, int);
va_end(p);
return (sum);
}
