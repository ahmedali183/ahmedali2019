
#include <stdio.h>
#include <stdlib.h>
#include "robocomponents.h"
#include "proto.h"
#define initialized 5

 void robo_connect()
 {
    //making connection between right arm components
    right_arm.s.connect_to_elbow=&right_arm.e;
    right_arm.e.connect_to_wrist=&right_arm.w;
    right_arm.w.connect_to_finger=&right_arm.f;

    //making connection between left arm components
    left_arm.s.connect_to_elbow=&left_arm.e;
    left_arm.e.connect_to_wrist=&left_arm.w;
    left_arm.w.connect_to_finger=&left_arm.f;

    //making connection between right leg components
    right_leg.w_e.connect_to_knee=&right_leg.k;
    right_leg.k.connect_to_foot=&right_leg.f;

    //making connection between left leg components
    left_leg.w_e.connect_to_knee=&left_leg.k;
    left_leg.k.connect_to_foot=&left_leg.f;
 }

 void voltage_init()
 {
   char a[20];
   printf("\n \n please enter order \n ");
   scanf("%s",a); //notice (s) for string

   if(a[0]=='s' || a[0]=='S')
    {
        right_arm.s.data=initialized;printf("\n right arm initialized \n");
        right_leg.w_e.data=initialized;printf("\n right leg initialized \n");
        left_arm.s.data=initialized;printf("\n left arm initialized \n");
        left_leg.w_e.data=initialized;printf("\n left leg initialized \n");
   }
   else {printf("\n \n initialization error \n");}

 }

  void robo_init()
{
   robo_connect();
   for(;;)
   {
       voltage_init();
       //notice == not = in if statement
       if(right_arm.s.data==initialized&&right_leg.w_e.data==initialized&&left_arm.s.data==initialized&&left_leg.w_e.data==initialized)
        {
            printf("\n \n ROBOT initialized successfully \n \n");
        break;
        }

   }

}
