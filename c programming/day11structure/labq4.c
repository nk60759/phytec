#include<stdio.h>
int main()
{
    int n;
     scanf("enter the value%d",&n);
     int arr[n];
     int *ptr;
     ptr=arr;
     for(int i=0;i<n;i++)
     {
        scanf{"%d",(ptr+i)};
     }
     for(int i=0;i<n;i++)
     {
        printf("%d",*(ptr+i));
        printf("element%d\n",i);
     }
    
}