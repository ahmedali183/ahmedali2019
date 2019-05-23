#include <stdio.h>
#include <stdlib.h>

void swap(int x,int y)
{
    int z=0;
    int *ptr1,*ptr2,*ptr3;

    ptr1=&x;
    ptr2=&y;
    ptr3=&z;

     *ptr3=*ptr2;
     *ptr2=*ptr1;
     *ptr1=*ptr3;


    printf("x=  %i \n",*ptr1);
    printf("y=  %i \n",*ptr2);


}

int main()
{
     int x,y;

   for(;;)
     {
    printf("enter x= \n");
    scanf("%i",&x);

    printf("enter y=  \n");
    scanf("%i",&y);

    swap(x,y);
     }

    return 0;
}
