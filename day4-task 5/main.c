#include <stdio.h>
#include <stdlib.h>

void speed()
{
    char acc;
    float x,z,m;

    printf("\n enter initial speed of catcher : ");
    scanf("%f",&z);

    printf("\n enter weight of body : ");
    scanf("%f",&m);
    printf("\n enter acceleration (a or g) :");
    scanf("%s",&acc);

    if(acc=='a'){printf("\n enter acceleration value= \n"); scanf("%f",&x);}
    else if(acc=='g'){x=9.81;}

    printf("\n speed of dropping= \n");
    printf("%f \n",m*x);

    printf("speed difference= %f\n",z-(m*x));

}
int main()
{
    for(;;)
    {
   speed();
    }

    return 0;
}
