#include<stdio.h>
int main()
{
   float a,b,c,d;
   printf("enter bytes");
   scanf("%f",&a);
   b=a/1024;
   printf("%f bytes=%f kb\n",a,b);


   c=a/(1024*1024);
   printf("%f bytes=%f mb\n",a,c);

   d=a/(1024*1024*1024);
   printf("%f bytes=%f gb\n",a,d);
}
