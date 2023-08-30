#include "main.h"

int is_palindrome_recursive(char *start, char *end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s: target string
 * Return: returns 1 or 0
 */

int is_palindrome(char *s)
{
return (is_palindrome_recursive(s, s + _strlen_recursion(s) - 1));
}
/**
 * _strlen_recursion - calculates the legnth
 * of a string recursively
 * @s: target string
 * Return: int number of bytes
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome_recursive - a recursive function to
 * check if a string is a palindrome or not
 * @start: begining of string
 * @end: end of the string
 * Return: 1 if pali and 0 otherwise
 */
int is_palindrome_recursive(char *start, char *end)
{
if (start >= end)
return (1);

if (*start != *end)
return (0);
return (is_palindrome_recursive(start + 1, end - 1));
}
