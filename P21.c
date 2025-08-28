#include<stdio.h>
int main()
{
   float gross,allowance,deduction,net;
   printf("enter gross salary");
   scanf("%f",&gross);

   allowance=0.1*gross;
   deduction=0.03*gross;

   net=gross + allowance - deduction;
   printf("%f gross + %f allowance - %f deduction=%f net salary\n",gross,allowance,deduction,net);

}
