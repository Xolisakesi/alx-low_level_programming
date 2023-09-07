#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - rurns the length of a string
 * @s: pointer to srtring argument
 * Return: number of bytes
 */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
/**
 * is_digit - function checks if string contains
 * only digits or nor
 * @s: string
 * Return: returns 1 if cound a non digit
 */
int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
{
return (0);
}
s++;
}
return (1);
}
/**
 * main - function multiplies 2 positive numbers
 * @argc: argument counter
 * @argv: 2d array of arguments
 * Return: always 0 (sucess)
 */
int main(int argc, char *argv[])
{
char *str1, *str2;
int len1, len2, len, i, carry, digit1, digit2, *product, a = 0;

str1 = argv[1], str2 = argv[2];
if (argc != 3 || !is_digit(str1) || !is_digit(str2))
{
printf("Error\n");
exit(98);
}
len1 = _strlen(str1);
len2 = _strlen(str2);
len = len1 + len2 + 1;
product = malloc(sizeof(int) * len);
if (!product)
return (1);
for (i = 0; i <= len1 + len2; i++)
product[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = str1[len1] - '0';
carry = 0;
for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
{
digit2 = str2[len2] - '0';
carry += product[len1 + len2 + 1] + (digit1 *digit2);
product[len1 + len2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
product[len1 + len2 + 1] += carry;
}
for (i = 0; i < len - 1; i++)
{
if (product[i])
a = 1;
if (a)
_putchar(product[i] + '0');
}
if (!a)
_putchar('0');
_putchar(10);
free(product);
return (0);
}
