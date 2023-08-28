#include "main.h"
/**
 * _strspn - function that gets the length of a
 * prefix substring.
 * @s: string to be evaluated
 * @accept: string containing carracters to match s
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j, k = 0;
int flag;

while (s[i])
{
flag = 0;
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
k++;
flag = 1;
break;
}
j++;
}
if (flag == 0)
{
return (k);
}
i++;
}
return (k);
}
