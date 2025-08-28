#include<stdio.h>
int main()
{
   float gross,discount,net;
   printf("enter gross sales");
   scanf("%f",&gross);

   discount=0.1*gross;

   net=gross - discount;
   printf("%f gross - %f discount=%f net sales\n",gross,discount,net);

}
