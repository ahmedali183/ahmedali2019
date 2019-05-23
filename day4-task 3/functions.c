#include "definitions.h"

void order()
{
    int x;
    for(;;)
    {
    printf("\n enter your order \n 1 for skip number \n 2 for advanced calculator \n 3 for power to a number \n 4 to draw pyramid \n");
    printf(" 5 for drawing 90 degree pyramid \n 6 for swap variables \n 7 for swap arrays \n 8 for flip array \n 9 for array \n ");
    printf("10 for battery statements \n 11 for fabonacci \n 12 for stack ");
    scanf("%i",&x);

    if(x==1){skipper();}
    if(x==2){advanced_calculator();}
    if(x==3){powered();}
    if(x==4){pyramid();}
    if(x==5){pyramid_2();}
    if(x==6){swap_var();}
    if(x==7){swap_arr();}
    if(x==8){flip();}
    if(x==9){array();}
    if(x==10){battery_low();}
    if(x==11){fabonacci();}
    if(x==12){stack();}

    else{break;}
    }
}



int* push(int *sp){
    printf("enter address \n");
    scanf("%i",sp);
    sp++;
    return sp;}

    int* pop(int *sp){
    sp--;
    *sp=0;
return sp;}

void print1(int stack[],int y)
{
for(int i=0;i<y;i++)
{printf("%i\n",stack[i]);}
}

//task12
void stack()
{
     int x,y,*p;
    int stack[100]={0};
    p=&stack;

        printf("\n enter stack size :");
    scanf("%i",&y);

        printf("enter 1 for push, 2 for push, 3 for print stack : ");

        scanf("%i",&x);

        if(x==1) {p=push(p);}
        else if(x==2)
            {p=pop(p);}
        else if(x==3)
            {print1(stack,y);}

}

//task11
void fabonacci()
{
       int x,firstNO=0,secondNO=1,nextNO;

  printf("enter number of terms \n");
  scanf("%i",&x);

  printf("First %i terms of Fibonacci series are: \n",x);

  for (int y=0;y<x;y++)
  {
    if (y<=1)
      nextNO=y; //notice
    else
    {
      nextNO=firstNO+secondNO;
      firstNO=secondNO;
      secondNO=nextNO;
    }
    printf("%i \n", nextNO);
  }
}

//task10
void battery_low()
{
    int x;

    printf("enter the battery current value from 1 to 10 : \n ");
    scanf("%i",&x);
    if(x==10){printf("battery is full, please remove the battery \n");}
    else if(x>10){printf("matafagera \n");}
    else if(10>x,x>=5){printf("battery is normal \n");} //new idea
    else if(5>x){printf("battery is low \n");}

}


//task9
void array()
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

//task8
void flip()
{
    int a[100],a_size;
    int *ptr1,*ptr2,*ptr3;

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

    ptr1=a;
    ptr2=a+a_size-1;

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

//task7
void swap_arr()
{
    int a[5],b[5];
    int z[5]={0};
    int *ptr1,*ptr2,*ptr3;

    printf("enter array of 5 elements a= \n");
    for(int i=0;i<5;i++)
    {scanf("%i",&a[i]);}

    printf("enter array of 5 elements b=  \n");
    for(int i=0;i<5;i++)
    {scanf("%i",&b[i]);}

    ptr1=a;
    ptr2=b;
    ptr3=z;

     ptr3=ptr2;
     ptr2=ptr1;
     ptr1=ptr3;


    printf("array a= \n");
    for(int i=0;i<5;i++)
    {
        printf("%i \n",ptr1[i]);
    }

    printf("array b= \n");
    for(int v=0;v<5;++v)
    {
        printf("%i \n",ptr2[v]);
    }

}

//task6
void swap_var()
{
    int x,y;
    int z=0;
    int *ptr1,*ptr2,*ptr3;

    printf("enter x= \n");
    scanf("%i",&x);

    printf("enter y=  \n");
    scanf("%i",&y);

    ptr1=&x;
    ptr2=&y;
    ptr3=&z;

     *ptr3=*ptr2;
     *ptr2=*ptr1;
     *ptr1=*ptr3;


    printf("x=  %i \n",*ptr1);
    printf("y=  %i \n",*ptr2);
}

//task5
void pyramid_2()
{
    int l;
     printf("enter no of output lines=  ");
          scanf("%i",&l);

          for(int i=0;i<l;i++) //create row

            {
                for(int s=0; s<l-i; s++) //create spaces
                  {
                   printf("  ");
                  }
               for(int y=0;y<((i*2)-1);y++) //create stars(shape)
                  {
                   printf("* ");
                  }

                 printf("\n");
            }

}

//task4
void pyramid()
{
    int z;
     printf("enter no of output lines=  ");
           scanf("%i",&z);

           for(int i=0;i<z;i++) //create row
            {
             for(int n=0;n<((i*2)-1);n++) //create stars(shape)
                {
                printf("*");
                }
                printf("\n");
            }
}


//task3
void powered()
{
    int x=0,y=1;

    printf("\n enter number to be powered \n");
    scanf("%i",&x);

    for(int i=0;i<x;i++){y=y*x;}

    printf("\n result= %i",y);
}

//task2
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

void advanced_calculator()
{
    int z,x,y,m,o,w;
     printf("please enter 1 for calculator,2 for cinema ticket \n");
        scanf("%i",&w);



        if(w==1)
        {
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
        else if(w==2)
        {
             printf("Please enter your order from (1 to 3) \n ");
            scanf("%i",&o);

             if(o==1){printf("normal ticket 50 LE \n");}
             else if(o==2){printf("vip ticket \n");}
             else if(o==3){printf("vip ticket + pop corn \n");}

        }


}

//task1
void skipper()
{
    int x,y;
            printf("please enter the number : ");
            scanf("%i",&x);

            printf("the number you want to skip is :");
            scanf("%i",&y);

                for (int i=0;i<=x;i++)
               {
                if((i%y)==0){continue;}
                printf("%i \n ",i);
               }
}
