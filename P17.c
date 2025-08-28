#include<stdio.h>
int main()
{
   float L,A,P;
   printf("enter the length of square");
   scanf("%f",&L);

   A=L*L;
   P=4*L;

   printf("%f length* %f length = %f area\n",L,L,A);
   printf("%f length *4 = %f perimeter",L,P);
}
