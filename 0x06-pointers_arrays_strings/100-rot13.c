#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string
 * Return: returns a pointer to string
 */
char *rot13(char *s)
{
static int i, j;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == alphabet[j])
{
s[i] = rot_13[j];
break;
}
}
}
return (s);
}
