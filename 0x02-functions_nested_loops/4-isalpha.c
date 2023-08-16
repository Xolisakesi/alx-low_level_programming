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


if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))


{
return (1);


}
else
{
return (0);


}
}
