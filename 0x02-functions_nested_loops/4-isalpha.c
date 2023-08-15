#include "main.h"
/**
 * _isalpha - checks if inputs is an alphabet
 *
 *@c: parameter of type im passed to function
 *
 * Return: 1 if its an aphabet otherwis 0
 *
 **/
int _isalpha(int c)
{
	int _char = c;

	if (_char >= 65 && _char <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
