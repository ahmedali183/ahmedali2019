#include <stdio.h>
#include <stdlib.h>

int add (int x, int y)
{
   return x+y;
}

int sub(int x,int y)
{
    return x-y;
}

int mult(int x,int y)
{
    return x*y;
}

void calculator()
{ int z,x,y,m;

                printf("Please enter your order from (1 to 3) \n ");
                scanf("%i",&z);

                printf("Please enter x \n ");
                scanf("%i",&x);

                printf("Please enter y \n ");
                scanf("%i",&y);

                if(z==1){m=add(x,y);}
                else if(z==2){m=sub(x,y);}
                else if(z==3){m=mult(x,y);}

                printf("m=%i \n",m);
          }





void cinema()
{   int o;



               printf("Please enter your order from (1 to 3) \n ");
            scanf("%i",&o);

             if(o==1){printf("normal ticket 50 LE \n");}
             else if(o==2){printf("vip ticket \n");}
             else if(o==3){printf("vip ticket + pop corn \n");}


}
int main()
{
     int w;
    for(;;)
    {   printf("please enter 1 for calculator,2 for cinema ticket \n");
        scanf("%i",&w);

       if (w==1){calculator(w);}
       else if (w==2){cinema(w);}

        }

    return 0;
}
