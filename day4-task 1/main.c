#include <stdio.h>
#include <stdlib.h>

struct node
     {
    int data;
    struct node *next; //create pointer(name) from type(node)
     };

int main()
{ int x,q;
    struct node n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    n1.data=0;n2.data=0;n3.data=0;n4.data=0;n5.data=0;n6.data=0;n7.data=0;n8.data=0;n9.data=0;n10.data=0;

    //n1.next=&n2;
    //n2.next=&n3;
    //n3.next=&n4;
    //n4.next=&n5;
    //n5.next=&n6;
    //n6.next=&n7;
    //n7.next=&n8;
    //n8.next=&n9;
    //n9.next=&n10;
    //n10.next=&n1;
    for(;;)
    {
    printf("to enter value 1, print value 2, print all 3 \n");
    scanf("%i",&q);
    if(q==1)
    {
     for(int i=0;i<10;i++)
       {

    printf("\n enter the node number from 1 to 10 to enter value, 0 you print \n");
    scanf("%i",&x);

    if(x==1){printf("enter value for N1= \n"); scanf("%i",&n1.data); /*printf("node 1 data= %i",n1.data);*/}
    else if(x==2){printf("enter value for N2= \n"); scanf("%i",&n2.data); /*printf("node 2 data= %i",n2.data);*/}
    else if(x==3){printf("enter value for N3= \n"); scanf("%i",&n3.data); /*printf("node 3 data= %i",n3.data);*/}
    else if(x==4){printf("enter value for N4= \n"); scanf("%i",&n4.data); /* printf("node 4 data= %i",n4.data);*/}
    else if(x==5){printf("enter value for N5= \n"); scanf("%i",&n5.data); /* printf("node 5 data= %i",n5.data);*/}
    else if(x==6){printf("enter value for N6= \n"); scanf("%i",&n6.data); /*printf("node 6 data= %i",n6.data);*/}
    else if(x==7){printf("enter value for N7= \n"); scanf("%i",&n7.data); /*printf("node 7 data= %i",n7.data);*/}
    else if(x==8){printf("enter value for N8= \n"); scanf("%i",&n8.data); /*printf("node 8 data= %i",n8.data);*/}
    else if(x==9){printf("enter value for N9= \n"); scanf("%i",&n9.data); /*printf("node 9 data= %i",n9.data);*/}
    else if(x==10){printf("enter value for N10= \n"); scanf("%i",&n10.data); /*printf("node 10 data= %i",n10.data);*/}
    else {break;}
       }
    }
    else if(q==2)
    {
    for(int i=0;i<10;i++)
       { int z;
    printf("\n enter the node number from 1 to 10 to print,0 you exit \n");
    scanf("%i",&z);

    if(z==1){printf("node 1 data= %i",n1.data);}
    else if(z==2){printf("node 2 data= %i",n2.data);}
    else if(z==3){printf("node 3 data= %i",n3.data);}
    else if(z==4){printf("node 4 data= %i",n4.data);}
    else if(z==5){printf("node 5 data= %i",n5.data);}
    else if(z==6){printf("node 6 data= %i",n6.data);}
    else if(z==7){printf("node 7 data= %i",n7.data);}
    else if(z==8){printf("node 8 data= %i",n8.data);}
    else if(z==9){printf("node 9 data= %i",n9.data);}
    else if(z==10){printf("node 10 data= %i",n10.data);}
    else {break;}
       }
    }

else if(q==3)
    {
    printf("\n %i \n %i \n %i \n %i \n %i \n %i \n %i \n %i \n %i \n %i ",n1.data,n2.data,n3.data,n4.data,n5.data,n6.data,n7.data,n8.data,n9.data,n10.data);
    }
    }
    return 0;
}
