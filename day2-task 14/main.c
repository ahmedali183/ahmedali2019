#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    int x,y,*p;
    int stack[100]={0};
    p=&stack;

        printf("\n enter stack size :");
    scanf("%i",&y);

    for(;;)
       {
        printf("enter 1 for push, 2 for push, 3 for print stack : ");

        scanf("%i",&x);

        if(x==1) {p=push(p);}
        else if(x==2)
            {p=pop(p);}
        else if(x==3)
            {print1(stack,y);}
        }




    return 0;
}
