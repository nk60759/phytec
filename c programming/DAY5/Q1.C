/*print the binary of given number


*/
#include<stdio.h>
int main()
{
int i,j,a;
printf("ENTER the value of a\n");
scanf("%d",&a);
// printf("binary form of given number a: ");
for(i=7;i>=0;i--)
{
    j=(a>>i) & 0x1;
    
      printf("position: %d\n",i);
      printf("binary value is %d\n",j);
} 
}