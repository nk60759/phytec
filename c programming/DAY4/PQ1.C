/*ENTER a 4 digit no. from key board and add 8 to number and then div it by 3,the mudulues of that no. is take with 5 and mul the resultant valu by 5 ,display the final result 
usages
syntax*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 4 digit number:");
    scanf("%d",&a);
    b=(((a+8)/3)%5)*5;
    printf("the final result is : %d\n",b);
    
}