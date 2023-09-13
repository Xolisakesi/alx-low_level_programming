#include "3-calc.h"

/**
 * main - program that performs simple arithmetic operations
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int arg1, arg2, result;
int (*func)(int, int);

if (argc != 4)
{
puts("Error");
exit(98);
}
arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
puts("Error");
exit(99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && arg2 == 0)
{
puts("Error");
exit(100);
}
result = func(arg1, arg2);
printf("%d\n", result);
return (0);
}

