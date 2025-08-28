#include<stdio.h>
int main()
{
   float L,A,B,P;
   printf("enter the length of square");
   scanf("%f",&L);

   printf("enter the width of square");
   scanf("%f",&B);

   A=L*B;
   P=2*(L+B);

   printf("%f length * %f width = %f area\n",L,B,A);
   printf("2*(%f length + %f width)  = %f perimeter",L,B,P);
}
