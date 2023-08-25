#include <stdio.h>
/**
  * get_string_length - function gets the string
  * length
  * @str: input string
  * Return: return 1 an int number of bytes
  */

int get_string_length(char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}
return (length);
}
/**
  * reverse_string - function reverses the string
  * @str: input string
  * @length: length of the string
  * Return: returns a pointer to reversed string
  */
char *reverse_string(char *str, int length)
{
int start = 0;
int end = length - 1;

while (start < end)
{
char temp = str[start];

str[start] = str[end];
str[end] = temp;
start++;
end--;
}
return (str);
}
/**
  * infinite_add - function adds two numbers
  * @n1: number 1
  * @n2:number 2
  * @r: results
  * @size_r: buffer size
  * Return: returns pointer to string
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len_n1 = get_string_length(n1);
int len_n2 = get_string_length(n2);
static int carry, index_r;
int index_n1 = len_n1 - 1;
int index_n2 = len_n2 - 1;
int sum, digit_sum;

while (index_n1 >= 0 || index_n2 >= 0 || carry > 0)
{
static int digit_n1;

if (index_n1 >= 0)
{
digit_n1 = n1[index_n1] - '0';
index_n1--;
}
if (index_n2 >= 0)
{
int digit_n2 = n2[index_n2] - '0';
index_n2--;
}
sum = digit_n1 + digit_n2 + carry;
carry = sum / 10;
digit_sum = sum % 10;
if (index_r < size_r - 1)
{
r[index_r] = digit_sum + '0';
index_r++;
}
else
{
return (0);
}
}
r[index_r] = '\0';
reverse_string(r, index_r);
return (r);
}
