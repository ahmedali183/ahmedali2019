#include <stdio.h>
#include <stdlib.h>

void speed()
{
    char acc;
    float x,m;

    printf("\n enter weight of body");
    scanf("%f",&m);
    printf("enter acceleration (a or g)");
    scanf("%s",&acc);

    if(acc=='a'||acc=='A'){printf("enter acceleration value= \n"); scanf("%f",&x);}
    else if(acc=='g'||acc=='G'){x=9.81;}

    printf("speed of dropping= ");
    printf("%f",m*x);


}
int main()
{
    for(;;)
    {
   speed();
    }

    return 0;
}
