#include "main.h"

int is_prime_recursive(int n, int i);

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0
 * @n: number passed to the function
 * Return: 1 if n is prime 0 otherwise
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, n - 1));
}
/**
 * is_prime_recursive - computes and checks
 * if the number is prime
 * @n: number to be evaluated
 * @i: iterator
 * Return: Returns 1 if is prime 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
if (i <= 1)
{
return (n > 1);
}
return (n % i != 0 && is_prime_recursive(n, i - 1));
}
