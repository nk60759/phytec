/*enter the value of two variable a,b and check if a<50 and a<b are true 
usage 
syntax*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    if(a<50 && a<b)
    {
    printf("true");
    }
    else
    { 
    printf("not true");
    }

}