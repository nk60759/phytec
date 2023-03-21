#include<stdio.h>
int main()
{
    int a;
    //printf("%x",&a);
    int *c=&a;
    if(a%sizeof(a)==0)
    {
        printf("\nallighnment");
    }
    else{
        printf("\nuallighnment");
    }
}