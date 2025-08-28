#include<stdio.h>
int main()
{
   float f,c;
   printf("enter fahrenheit");
   scanf("%f",&f);
   c=(f-32)*5/9;
   printf("%f fahrenheit=%f celsius\n",f,c);
}
