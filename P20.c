#include<stdio.h>
int main()
{
   float h,l,A;
   printf("enter height");
   scanf("%f",&h);

   printf("enter length");
   scanf("%f",&l);

   A=(h*l)/2;
   printf("(%f height * %f length)/2 =%f area\n",h,l,A);

}
