#include "main.h"
#include <stdlib.h>
int is_whitespace(char c);
/**
 * strtow - function that splits a string into words.
 * @str: string to be split into two
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
char **matrix;
static int words, i, start, word_index, word_len, j;

if (str == NULL)
return (NULL);
for (; str[i] != '\0'; i++)
{
if (!is_whitespace(str[i]))
{
words++;
while (str[i] && !is_whitespace(str[i]))
i++;
}
}
if (words == 0)
return (NULL);
matrix = (char **)malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; str[i]; i++)
{
if (!is_whitespace(str[i]))
{
start = i;
while (str[i] && !is_whitespace(str[i]))
i++;
word_len = i - start;
matrix[word_index] = (char *)malloc(sizeof(char) * (word_len + 1));
if (matrix[word_index] == NULL)
return (NULL);
for (j = 0; j < word_len; j++)
{
matrix[word_index][j] = str[start + j];
}
matrix[word_index][word_len] = '\0';
word_index++;
}
}
matrix[words] = NULL;
return (matrix);
}
/**
 * is_whitespace -function checks for white spaces
 * @c: char to be checked if its a white space
 * Return: returns an int.
 */
int is_whitespace(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}
