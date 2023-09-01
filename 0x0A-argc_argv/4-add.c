#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that adds positive numbers.
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: Always 0 sucess
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < 48 || argv[i][j] > 57)
{
printf("Error\n");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
