/*swaping two no.using bitwise or exclusive(xor)*/
#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
a=a^b;
b=a^b;
a=a^b;
printf("number after swap");
printf("a=%d b=%d",a,b);
return 0;
}