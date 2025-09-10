#include <stdio.h>
//#include <conio.h>
int main()
{
    char nm[50];
   // clrscr();
    gets(nm);
    printf("%s\n",nm);
    int i = 0;
    while(nm[i] !='\0')
    {
        if (nm[i] >='a' && nm[i] <= 'z')
        nm[i] = nm[i]-32;
        printf("%c %d\n",nm[i++],nm[i]);
    }
    printf("length of %s is %d\n",nm,i);
    //getch();
    return 0;
}

