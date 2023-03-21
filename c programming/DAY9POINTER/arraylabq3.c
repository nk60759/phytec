#include<stdio.h>
int main()
{
    int a[10],i,s=0;
    printf("enter 10 value:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }


printf("sum of integar%d\n",s);
return 0;
}