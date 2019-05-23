#include <stdio.h>
#include <stdlib.h>

//selection sort to sort numbers. This code implements selection sort algorithm
//to arrange numbers of an array in ascending order.

int main()
{
  int a[100],x,position,swap;

  printf("enter number of elements \n");
  scanf("%i",&x);

  printf("enter %i integers \n",x);
  for(int i=0;i<x;i++)
  scanf("%i",&a[i]);

  for(int i=0;i<x;i++) //to go for all the array numbers
  {
    position=i; //would point to each number by consecutive way
    for(int d=i+1;d<x;d++) //this would count (x-1) times
    {
      if(a[position]>a[d]) //test which is the bigger number,the current number(a[position])or next number (a[d])
      position=d;   //this line i write to make a situation((position!=i)) to swap numbers,to make position at the next number
    }
    if(position!=i) //at this situation we can swap numbers
    {
      swap=a[i];      //this would swap the positions of current number with next number(if current>next)
      a[i]=a[position]; //in this line position=d as it is now in the next number
      a[position]=swap;
    }
  }

  printf("Sorted list in ascending order:\n");

  for(int i=0;i<x;i++)
    printf("%i \n",a[i]);


    return 0;
}
