#include <stdio.h>
#include <stdlib.h>

#define y 10
#define z  5

void battery_low()
{
    int x;

    for(;;)
    {
    printf("enter the battery current value from 1 to 10 : \n ");
    scanf("%i",&x);
    if(x==y){printf("battery is full, please remove the battery \n");}
    else if(x>y){printf("matafagera \n");}
    else if(y>x,x>=z){printf("battery is normal \n");} //new idea
    else if(z>x){printf("battery is low \n");}
    }
}

int main()
{
    battery_low();

    return 0;
}
