#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the
 * arguments of your program.
 * @ac: argument counter
 * @av: pointer to 2d array
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
int pos, i, total_len, newline_count;
char *arg, *current;

if (ac <= 0 || av == NULL)
return (NULL);
total_len = 0;
newline_count = ac;
for (i = 0; i < ac; i++)
{
current = av[i];
while (*current)
{
total_len++;
current++;
}
}
arg = (char *)malloc(total_len + newline_count + 1);
if (arg == NULL)
return (NULL);
pos = 0;
for (i = 0; i < ac; i++)
{
current = av[i];
while (*current)
{
arg[pos++] = *current;
current++;
}
arg[pos++] = '\n';
}
arg[pos] = '\0';
return (arg);
}
