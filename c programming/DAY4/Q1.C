/* The program explain arithmetic operations
usage: operators-(+),(-),(*),(/),(%)
syntax: operand <operator>operand -a+b*/
#include<stdio.h>
int main()
{
    int a=10;
    int b=5;
    int sum=a+b,sub=a-b,mul=a*b,div=a/b,mod=a%b;
   /* int sub=a-b;
    int mul=a*b;
    int div=a/b;
    int mod=a%b;*/
    printf("sum=%d\n sub=%d\n mul=%d\n div=%d\n mod=%d\n",sum,sub,mul,div,mod);
    return 0;
}