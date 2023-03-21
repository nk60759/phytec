/*swip of two number without using third vatiable
usages=+,_
syntax*/
#include<stdio.h>
int main()
{
    int a=7;
    int b=6;
     a=a+b;
     b=a-b;
     a=a-b;
   /* int sub=a-b;ṇ
    int mul=a*b;

    int div=a/b;
    int mod=a%b;*/
    printf("%d%d\n",a,b);
    return 0;
}