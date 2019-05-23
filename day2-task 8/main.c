#include <stdio.h>
#include <stdlib.h>
void array_entry()
{
         int a[30];
         int x_size;
         int *ptr;
         ptr=a;

         printf("enter size of array: ");
         scanf("%i",&x_size);

         printf("enter array elements a= \n");
         for(int i=0;i<x_size;i++)
         {scanf("%i",&a[i]);}

         printf("your array \n");

       for(int i=0;i<x_size;i++)
           {
               printf("%i \n",ptr[i]);
           }

}


int main()
{
for(;;)
{
    array_entry();
}

    return 0;
}
