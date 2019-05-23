#include <stdio.h>
#include <stdlib.h>

int main()
{

   for(;;)
    {
    int x=0,y=1; //notice y=1

    printf("\n enter number to be powered \n");
    scanf("%i",&x);

    for(int i=0;i<x;i++){y=y*x;} //new idea how to use syntax to get power of number(3-> 3*3*3)

    printf("\n result= %i",y);
    }
    return 0;
}
