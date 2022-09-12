#include <stdio.h>
/**
 * main - Printing out the memories allocated
 *
 * Reurn: compulsory 0
 *
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %i bytes(s)\n", sizeof(a));
printf("Size of a int: %i bytes(s)\n", sizeof(b));
printf("Size of a long int: %i bytes(s)\n", sizeof(c));
printf("Size of a long long int: %i bytes(s)\n", sizeof(d));
printf("Size of a float: %i bytes(s)\n", sizeof(e));
return (0);
}
