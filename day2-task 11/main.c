#include <stdio.h>
#include <stdlib.h>
void func()
{
    int x,y;

    for(;;)
        {
    printf("enter max value : ");
    scanf("%i",&x);
        printf("enter the skipped step :");
         scanf("%i",&y);

    for (int i=0;i<=x;i++)
    {
        if((i%y)==0){continue;}
        printf("%i \n ",i);
    }
        }
}
int main()
{
     func();
    return 0;
}
