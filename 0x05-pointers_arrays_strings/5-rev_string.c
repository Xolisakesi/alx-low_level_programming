#include "main.h"
/**
 * rev_string - a funtion that reverses a string
 * @s: pointer to string argument
 * Return: void nothing
 */
void rev_string(char *s)
{
int i, j, len;
char temp;
len = 0;

for (i = 0; s[i] != '\0'; i++)
{
len++;
}
j = len - 1;
for (i = 0 ; i < len / 2; i++)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
j--;
}
}
