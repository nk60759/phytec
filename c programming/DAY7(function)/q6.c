#include<stdio.h>
//int a=10;
int main()
{
    static int a=20;
    printf("%d\n",a);
    {
     static int a=230;
    printf("%d\n",a);  
    }
    {
    static int a=40;
    printf("%d\n",a);
    }
    //printf("%d",a)
}