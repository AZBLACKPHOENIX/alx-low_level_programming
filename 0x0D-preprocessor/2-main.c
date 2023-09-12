/*A Program that prints the name of the file it was compiled from*/

#include <stdio.h>
#include <unistd.h>

int main()
{
printf(__FILE__);
printf("\n");
return 0;
}
