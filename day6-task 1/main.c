#include <stdio.h>
#include <stdlib.h>

struct A
{
    int x;
    int y;
    struct A *next_node;
};

struct B
{
    int s;
    int t;
    struct B *next_node;
};

struct Z
{
    struct A *right;
    struct B *left;
}z_struct;

void A_ll_init()
{
   z_struct.right=(struct A*)malloc(sizeof(struct A));
   printf("\n enter x value  ");
   scanf("%i",&z_struct.right->x);
   printf("\n enter y value  ");
   scanf("%i",&z_struct.right->y);
   z_struct.right->next_node=NULL;
   printf("\n");
}

void B_ll_init()
{
   z_struct.left=(struct B*)malloc(sizeof(struct B));
   printf("\n enter s value  ");
   scanf("%i",&z_struct.left->s);
   printf("\n enter t value  ");
   scanf("%i",&z_struct.left->t);
   z_struct.left->next_node=NULL;
   printf("\n");
}

void A_ll_create_new_node()
{
    static int counter=1;
    struct A *img1_ptr;
    img1_ptr=z_struct.right;
      for(;;)
    {
        if((img1_ptr->next_node)==NULL){break;}
        img1_ptr=img1_ptr->next_node;
    }
    img1_ptr->next_node=(struct A*)malloc(sizeof(struct A));
    counter++;
    printf("\n enter x of node %i :",counter);
    scanf("%i",&img1_ptr->next_node->x);
    printf("\n enter y of node %i :",counter);
    scanf("%i",&img1_ptr->next_node->y);
    img1_ptr->next_node->next_node=NULL;
    printf("\n");
}

void B_ll_create_new_node()
{
    static int counter=1;
    struct B *img2_ptr;
    img2_ptr=z_struct.left;
      for(;;)
    {
        if((img2_ptr->next_node)==NULL){break;}
        img2_ptr=img2_ptr->next_node;
    }
    img2_ptr->next_node=(struct B*)malloc(sizeof(struct B));
    counter++;
    printf("\n enter s of node %i :",counter);
    scanf("%i",&img2_ptr->next_node->s);
    printf("\n enter t of node %i :",counter);
    scanf("%i",&img2_ptr->next_node->t);
    img2_ptr->next_node->next_node=NULL;
    printf("\n");
}

void A_ll_display()
{
    int counter=1;
    struct A *img1_ptr;
    img1_ptr=z_struct.right;

 for(;;)
 {
     if(img1_ptr->next_node==NULL)
     {
     printf("\n node %i : ",counter);
     printf("\n value of x : %i \n ",img1_ptr->x);
     printf("\n value of y : %i \n ",img1_ptr->y);
            break;
     }
     printf("\n node %i : ",counter++);
     printf("\n value of x : %i \n ",img1_ptr->x);
     printf("\n value of y : %i \n ",img1_ptr->y);
     img1_ptr=img1_ptr->next_node;
 }
}

void B_ll_display()
{
    int counter=1;
    struct B *img2_ptr;
    img2_ptr=z_struct.left;

 for(;;)
 {
     if(img2_ptr->next_node==NULL)
     {
     printf("\n node %i : ",counter);
     printf("\n value of s : %i \n ",img2_ptr->s);
     printf("\n value of t : %i \n ",img2_ptr->t);
            break;
     }
     printf("\n node %i : ",counter++);
     printf("\n value of s : %i \n ",img2_ptr->s);
     printf("\n value of t : %i \n ",img2_ptr->t);
     img2_ptr=img2_ptr->next_node;
 }
}



int main()
{
    int pick;
    A_ll_init();
    printf("\n x= %i",z_struct.right->x);
    printf("\n y= %i",z_struct.right->y);

    B_ll_init();
    printf("\n s= %i",z_struct.left->s);
    printf("\n t= %i",z_struct.left->t);

    for(;;)
    {
        printf("\n press 1 to create A-node \n press 2 create B-node \n press 3 to display A-node components \n press 4 to display B-node components \n to exit press 5 \n ");
        scanf("%i",&pick);
        if(pick==1){A_ll_create_new_node();}
        else if(pick==2){B_ll_create_new_node();}
        else if(pick==3){A_ll_display();}
        else if(pick==4){B_ll_display();}
        else if(pick==5){break;}
        else{/*no thing*/}
    }


    return 0;
}
