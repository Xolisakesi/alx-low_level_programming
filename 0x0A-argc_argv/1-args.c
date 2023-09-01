#include "main.h"
#include <stdio.h>
/**
 * main - pints number of arguments that are
 * passed to the program
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: Always 0 sucess
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", (argc - 1));
return (0);
}
