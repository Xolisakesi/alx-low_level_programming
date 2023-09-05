#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: Second string
 * Return: returns pointed to s3
 */
char *str_concat(char *s1, char *s2)
{
static int len1, len2, i, j;
char *s3;

if (!s1 && !s2)
return (NULL);
if (s1)
{
while (s1[len1])
len1++;
}
if (s2)
{
while (s2[len2])
len2++;
}
s3 = malloc(len1 + len2 + 1);
if (!s3)
return (NULL);
i = 0;
j = 0;
if (s1)
{
while (i < len1)
{
s3[i] = s1[i];
i++;
}
}
if (s2)
{
while (i < (len1 + len2))
{
s3[i] = s2[j];
i++;
j++;
}
}
s3[i] = '\0';
return (s3);
}

