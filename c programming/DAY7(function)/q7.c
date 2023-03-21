#include<stdio.h>
int count()
{
    int count=0;
    //static int count=0;
    //auto int count=0;
    count++;
    printf("%d",count);
    printf("address=%d\n",&count);
}
int main()
{
    count();
    count();
    count();
    count();
}