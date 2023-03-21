#include<stdio.h>
int main()
{
    int a,b;
    int *ptr=&a,*ptr1=&b;
    scanf("%d%d",&a,&b);
    if(*ptr>*ptr1)
    {
        printf("maximum is %d",*ptr);
    }else{
        printf("maximum is %d",*ptr1);
    }
}