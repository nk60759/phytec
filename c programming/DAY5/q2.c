#include<stdio.h>
int main()
{
int i,j,a,b,c,k;
printf("\nENTER the value of a:");
scanf("%d",&a);
printf("\nENTER the value of b:");
scanf("%d",&b);
printf("\nBinary format of a:");

for(i=7;i>=0;i--)
{
    j=(a>>i) & 0x1;
    printf("%d",j);
    
} 
printf("\nBinary format of b:");
for(i=7;i>=0;i--)
{
    j=(b>>i) & 0x1;
    printf("%d",j);
    
} 
printf("%d",c=a&b);
printf("%d",k=a|b);
printf("\nBinary format of a&b:");
for(i=7;i>=0;i--)
{
    j=(c>>i) & 0x1;
    printf("%d",j);
    
}
printf("\nBinary format of a|b:");

for(i=7;i>=0;i--)
{
    j=(k>>i) & 0x1;
    printf("%d",j);
    
}

}