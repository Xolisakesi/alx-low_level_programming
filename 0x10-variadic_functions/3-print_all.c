#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: types of agument passed to the function
 * Return: nothing void
 */
void print_all(const char * const format, ...)
{
const char *format_ptr = format;
char *str, *sep;
va_list list;
va_start(list, format);

sep = "";
while (format_ptr && *format_ptr)
{
switch (*format_ptr)
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
{
str = va_arg(list, char *);
printf("%s%s", sep, (str ? str : "(nil)"));
}
break;
default:
break;
}
sep = ", ";
format_ptr++;
}
printf("\n");
va_end(list);
}

