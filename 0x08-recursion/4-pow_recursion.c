#include "main.h"
/**
 * _pow_recursion - function that returns
 * the value of x raised to the power of y.
 * @x: int to be raised to power
 * @y: power of the int x
 * Return: int x raised to power y
 */
int _pow_recursion(int x, int y)
{
return ((y < 0) ? -1 : (y == 0) ? 1 : x * _pow_recursion(x, y - 1));
}
