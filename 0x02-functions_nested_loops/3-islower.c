#include "main.h"
/**
 * _islower - takes int c and  checks if
 * lowercase charactor
 *
 *@c: parameter of type int
 *
 * Return: Always 0 (sucess)
 *
 **/
int _islower(int c)
{
	int _char = c;

	if (_char >= 97 && _char <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
