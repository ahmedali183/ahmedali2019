#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    for(;;)
        {
            printf("please enter the number : ");
            scanf("%i",&x);

            printf("the number you want to skip is :");
            scanf("%i",&y);

                for (int i=0;i<=x;i++)
               {
                if((i%y)==0){continue;} //new idea of reminder and continue
                printf("%i \n ",i);
               }
         }

    return 0;
}
