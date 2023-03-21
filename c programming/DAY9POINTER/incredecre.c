#include<stdio.h>
int main()
{
    float a=10.20;
    float *p;
    p=&a;
    printf("the value of p is :%x",p);
    p++;
    printf("the value of p is after increment :%x\n",p);
    p--;
    printf("the value of p is after decrement :%x\n",p);
}