#include "main.h"
/**
 * _strlen - rurns the length of a string
 * @s: pointer to srtring argument
 * Return: numner of bytes
 */
int _strlen(char *s)
{
int _strlen = 0;
int i;

for (i = 0; s[i] != '\0'; i++)
{
_strlen++;
}
return (_strlen);
}
