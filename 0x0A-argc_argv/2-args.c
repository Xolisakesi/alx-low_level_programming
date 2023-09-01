#include "main.h"
#include <stdio.h>
/**
 * main -  prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 sucess
 */
int main(int argc, char *argv[])
{
static int i;

for (; i < argc; i++)
{
printf("%s\n", *(argv + i));
}
return (0);
}
