#include "main.h"
#include <stdio.h>
#include "7-leet.c"
/**
* main - check the code for
*
* Return: Always 0.
*/
int main(void)
{
char s[] = "Expect the worst. Capitalizeat comes.\n";
char *p;
p = leet(s);
printf("%s", p);
printf("%s", s);
return (0);
}
