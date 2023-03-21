/*8 bit register each bit connected to led let register be 11100000 1 is for on and 0 is for off turn on the 2 bit position of led without affecting other*/
#include<stdio.h>
int main()
{
    int a,j,k,d,e,b;
    printf("enter the value of a is :");
    scanf("%d",&a);
    k=1<<2;
    printf("binar form of a given number\n");
    for(int i=7;i>=0;i--)
    {
        j=(a>>i) &1;
        d=(b>>i) &1;
        e=j|d;
        printf("%d",e);
        return 0;
         
    }
}