#include "main.h"
/**
 * _isupper - a function to check if letter is upper
 * case or lower case.
 * @c: charracter to be tested
 * Return: return 1 if its uppercase or 0 if not
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
