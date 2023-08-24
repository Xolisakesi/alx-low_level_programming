#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @s: pointer to string
 * Return: returns pointer to string
 */
char *leet(char *s)
{
static int i, j;
char str_1[] = "aAeEoOtTlL";
char str_2[] = "4433007711";

for (; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == str_1[j])
{
s[i] = str_2[j];
}
}
}
return (s);
}
