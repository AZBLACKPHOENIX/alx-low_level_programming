#include <stdio.h>
/**
*main-print all the size of types
*Return:0
*/
int main(void)
{
int size;
size = sizeof(char);
printf("Size of a char: %d byte(s)\n", size);
size = sizeof(int);
printf("Size of an int: %d bytes(s)\n", size);
size = sizeof(long int);
printf("Size of a long int: %d bytes(s)\n", size);
size = sizeof(long long int);
printf("Size of a long long int: %d bytes(s)\n", size);
size = sizeof(float);
printf("Size of a float: %d byte(s)\n", size);
return (0);
}
