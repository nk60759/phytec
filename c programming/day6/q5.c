/*to print the greatest no of 3 input */
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
   if ((a>=b) && (a>=c) && (b>=c)){
       printf("the greatest value is:%d",a,b);
   }
    else {
       printf("the greatest value is :%d",c);
   }
    return 0;
}