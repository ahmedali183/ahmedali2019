#include <stdio.h>
#include <stdlib.h>

void flip(int a[])
{
      printf("enter array of 5 elements a= \n");
    for(int i=0;i<5;i++)
    {scanf("%i",&a[i]);}

    int *ptr1;
    ptr1=a;

    printf("array a= \n");
    for(int i=4;i>=0;--i)
    {
        printf("%i \n",a[i]);
    }
}


void swap2(int a[],int b[])
{
    printf("enter array of 5 elements a= \n");
    for(int i=0;i<5;i++)
    {scanf("%i",&a[i]);}

    printf("enter array of 5 elements b=  \n");
    for(int i=0;i<5;i++)
    {scanf("%i",&b[i]);}

    int z[5]={0};
    int *ptr1,*ptr2,*ptr3;
    ptr1=a;
    ptr2=b;
    ptr3=z;

     ptr3=ptr1;
     ptr1=ptr2;
     ptr2=ptr3;


    printf("array a= \n");
    for(int i=0;i<5;i++)
    {
        printf("%i \n",b[i]);
    }

    printf("array b= \n");
    for(int v=0;v<5;v++)
    {
        printf("%i \n",a[v]);
    }

}

void swap1(int x,int y)
{

    printf("enter x= \n");
    scanf("%i",&x);
    printf("enter y=  \n");
    scanf("%i",&y);

    int z=0;
    int *ptr1,*ptr2,*ptr3;
    ptr1=&x;
    ptr2=&y;
    ptr3=&z;
     *ptr3=*ptr2;
     *ptr2=*ptr1;
    *ptr1=*ptr3;


    printf("x=  %i \n",*ptr1);
    printf("y=  %i \n",*ptr2);


}

void func()
{
    int a[5],b[5];
    int x,y,z;
    for(;;)
        {
    printf("enter 1 for swap variables, 2 for swap arrays, 3 for flip array ....   ");
    scanf("%i",&z);

    if(z==1)
    {
        swap1(x,y);
    }

     else if(z==2)
     {
         swap2(a,b);
     }

     else if(z==3)
     {
         flip(a);
     }
        }
}
int main()
{
    func();
    return 0;
}
