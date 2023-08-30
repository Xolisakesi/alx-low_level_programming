#include "main.h"
#include <stdio.h>

int natural_sqrt_recursion(int n, int i, int limit);

/**
 * _sqrt_recursion - returns the natural square
 * root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (natural_sqrt_recursion(n, 0, n / 2 + 1));
}

/**
 * natural_sqrt_recursion - recursively finds the
 * natural square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 * @limit: upper limit of search range
 *
 * Return: the resulting square root
 */
int natural_sqrt_recursion(int n, int i, int limit)
{
if (i * i > n || i > limit)
return (-1);
if (i * i == n)
return (i);
return (natural_sqrt_recursion(n, i + 1, limit));
}
