//array as an argument to the function
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9},*p,i;
    p=&a;
    for(i=0;i<=10;i++)

    {
        printf("value of array before change %d\n",a[i]);

    }
    
        printf("\n");

}//read(a)
int read(int a[])
{
    for(int i=0;i<=0;i++)
    {
        a[i]=i+10;
        printf("value of arrary after change%d\n",a[i]);
    }
}