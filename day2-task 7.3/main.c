#include <stdio.h>
#include <stdlib.h>

void flip(int a[],int a_size)
{
    int *ptr1,*ptr2,*ptr3;

    ptr1=a; //to make ptr1 point at the start of array
    ptr2=a+a_size-1;  //to make ptr2 point at the end of array

    for(;ptr1<ptr2;)
    {
        *ptr3=*ptr1;
        *ptr1=*ptr2;
        *ptr2=*ptr3;

        ptr1++;
        ptr2--;
    }

     printf("\n array after flipping = \n");

     for(int i=0;i<a_size;i++)
       {printf("\n %i",a[i]);}

}

int main()
{
    int a[100],a_size;

    for(;;)
          {
    printf("\n enter array size \n");
    scanf("%i",&a_size);
    printf("enter array of elements \n");
    for(int i=0;i<a_size;i++)
    {
        scanf("%i",&a[i]);
    }

    printf("array before flipping = \n");
    for(int i=0;i<a_size;i++)
    {
     printf("\n %i" ,a[i]);
    }

   flip(a,a_size);


         }

    return 0;
}
