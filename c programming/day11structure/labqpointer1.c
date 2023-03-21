#include<stdio.h>
int main()
{
    int a=5,b=6;
    int *ptr,*ptr1;
    ptr=&a;
    ptr1=&b;
    *ptr=a+b;
    printf("%d",*ptr);
}