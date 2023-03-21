#include<stdio.h>
int main()
{
    int a[10],i,s=0,b=0,c=0;
    printf("enter 10 value:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        //c=c+a[i];
    }
    
      for(i=0;i<=4;i++)
    {
        s=s+a[i];
    }
    for(i=5;i<=9;i++)
    {
        b=b+a[i];
    }
    
if(s==b)
{
    printf("the value are same");
}
else
{
    printf("not equal"); 
}
//printf("sum of integar%d\n",s);
//printf("sum of all integar:%d\n",c);
return 0;
}