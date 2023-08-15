#include "main.h"
/**
 * _abs - computes absolute value of an int
 *
 *@n: parameter passed to function
 *
 * Return: Always 0 (sucess)
 *
 **/
int _abs(int n)
{
	int num = n;

	if (num < 0)
	{
		num = num * -1;
		return (num);
	}
	else
	{
		return (num);
	}
}
