#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints a minimum number of coins of change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 sucess, else 1 and prints Error
 */
int main(int argc, char *argv[])
{
static int j, num, result;
int coins[5] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
if (num < 0)
{
printf("0\n");
return (0);
}
num = atoi(argv[1]);
for (j = 0; j < 5 && num > 0; j++)
{
while (num >= coins[j])
{
result++;
num -= coins[j];
}
}
printf("%d\n", result);
return (0);
}
