#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: arguments vector.
 * Return: sum of argrv[1] and argv[2]
 *
 */
int main(int argc, char *argv[])
{
unsigned int product;
if (argc < 3)
{
printf("Error\n");
return (1);
}
product = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", product);
return (0);
}
