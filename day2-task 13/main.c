#include <stdio.h>
#include <stdlib.h>

int main()
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
    return 0;
}
