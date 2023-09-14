#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator: strimg to be separated between numbers
 * @n: number of arguments passed into the functiin
 * Return: void nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
va_start(list, n);

for (i = 0; i < n; i++)
{
if (i > 0 && separator)
printf("%s", separator);

printf("%d", va_arg(list, int));
}
va_end(list);
printf("\n");
}
