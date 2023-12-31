#include "main.h"
 /** 
  * _atoi - converts a string to an integer 
  * @s: string to be converted 
  * 
  * Return: the int converted from the string 
  */
int _atoi(char *s) 
{
    int result = 0;
    int sign = 1;
    int i = 0;

 
    if (s[0] == '-') 
    {
        sign = -1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') 
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return sign * result;
}
