#include "main.h"
/**
 * swap_int - function that swipes the values of int
 * @a: parameter of type pointer to int a
 * @b: parameter of type point to int b
 * Return: returns void nothing
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *b;
*b = *a;
*a = temp;
}
