#include "variadic_functions.h"
/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: separator between strings
 * @n: number of arguments
 * Return: returns nothing void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list list;
va_start(list, n);

for (i = 0; i < n; i++)
{
s = va_arg(list, char *);
if (!separator || i == 0)
printf("%s", s ? s : "(nil)");
else
printf("%s%s", separator, s ? s : "(nil)");
}
va_end(list);
printf("\n");
}
