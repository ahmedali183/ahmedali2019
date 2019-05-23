#include <stdio.h>
#include <stdlib.h>

int main()
{
        int l;

     for(;;)
        {
           printf("enter no of output lines=  ");
           scanf("%i",&l);

           for(int i=0;i<l;i++) //create row
            {
             for(int n=0;n<((i*2)-1);n++) //create stars(shape)
                {
                printf("*");
                }
                printf("\n");
            }
         }
        return 0;

}
