#include <stdio.h>
#include "main.h"
/**
* _isalpha - check for alphabets.
*
* @c: parameter for alpha
* Return: Always 0.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
