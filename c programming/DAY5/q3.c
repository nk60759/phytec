/* count the no.of 1's in given number*/
#include<stdio.h>
int main()
{
int a,j,c=0;
scanf("%d",&a);
for(int i=7;i>=0;i--)
{
    j=(a>>i) & 0x1;
    printf("the binary of  a:%d\n",j);
    if(j==1){
        c++;
    }
    
    
} 
printf("%d",c);
return 0;

}