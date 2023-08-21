#include "main.h"
/**
 * _atoi - function converts a string to an int
 * @s: pointer to string
 * Return: returns an interger value
 */
int _atoi(char *s)
{
int r = 0;
int sign = 1;
int i = 0;

if (s[0] == '-')
{
sign = - 1;
i = 1;
}
while (s[i] >= '0' && s[i] <= '9')
{
r = r * 10 + (s[i] - '0');
i++;
}
return (r * sign);
}
