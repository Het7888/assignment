#include<stdio.h>
int main()
{

    char str[50];
    printf("enter a string\n");
    gets(str);
    void printstr(char[]);
    printstr(str);
 return 0;
}
void printstr(char s[])
{

    char*ptr=s;
    while(*ptr !='\0')
{
    printf("%c",*ptr);
    ptr++;
}
{
    printf("\nLength of the string is%d,\n",ptr-s);
}

