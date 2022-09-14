#include <stdio.h>
#include "main.h"
/**
* _islower - checks for lowercase.
*
* @c: is the integer used for argument
*
* Return: Always 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
