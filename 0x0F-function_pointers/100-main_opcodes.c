#include <stdio.h>
#include <stdlib.h>
/**
 * main - funtion that prints the opcodes of its own
 * main function.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 for secess, 2 or 2 for error
 */
int main(int argc, char *argv[])
{
int i, bytes;
char *arr;
if (argc != 2)
{
printf("Error\n");
return (1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return (2);
}
arr = (char *)main;
for (i = 0; i < bytes; i++)
{
printf(i == bytes - 1 ? "%02hhx\n" : "%02hhx ", arr[i]);
}
return (0);
}
