#include<stdio.h>
int main()
{
   float a,b,c,average;

   printf("enter marks of subject a");
   scanf("%f",&a);

   printf("enter marks of subject b");
   scanf("%f",&b);

   printf("enter marks of subject c");
   scanf("%f",&c);

   average=(a+b+c)/3;
   printf("(%f subject1 + %f subject2 +%f subject3)/3 = %f average\n",a,b,c,average);
}
