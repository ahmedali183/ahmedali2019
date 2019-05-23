#include <stdio.h>
#include <stdlib.h>

void swap(int a[],int b[])
{
    int z[5]={0};
    int *ptr1,*ptr2,*ptr3;

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
int main()
{
    int a[5],b[5];

    for(;;)
    {
    printf("enter array of 5 elements a= \n");
    for(int i=0;i<5;i++)
    {scanf("%i",&a[i]);}

    printf("enter array of 5 elements b=  \n");
    for(int i=0;i<5;i++)
    {scanf("%i",&b[i]);}

    swap(a,b);
    }

    return 0;
}
