#include <stdio.h>
#include <stdlib.h>

int main()
{

    int L;
for(;;)
{         printf("enter no of output lines=  ");
          scanf("%i",&L);

          for(int i=0;i<L;i++) //create row

            {
                for(int s=0; s<L-i; s++) //create spaces
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
    return 0;
}
