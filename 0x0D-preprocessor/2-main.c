/*A Program that prints the name of the file it was compiled from*/

#include <stdio.h>
#include <unistd.h>

int main()
{
_putchar(__FILE__);
_putchar("\n");
return 0;
}
