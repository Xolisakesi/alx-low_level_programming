#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - fuctiom peforms simple arithmetic operations
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int op, arg1, arg2, result;
op = atoi(argv[2]);
if (argc != 4)
{
puts("Error");
return (98);
}
if (op != 1 || (op != '+' && op != '-' && op != '*' && op != '/' && op != '%'))
{
puts("Error");
return (99);
}
arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);
result = get_op_func(argv[2])(arg1, arg2);

if (!result)
{
puts("Error");
return (99);
}
else if ((*argv[2] == '/' || *argv[2] == '%') && arg2 == 0)
{
puts("Error");
return (100);
}
printf("%d\n", result);
return (0);
}
