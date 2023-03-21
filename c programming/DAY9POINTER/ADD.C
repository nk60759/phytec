#include<stdio.h>
int add(int*,int*);
int main(){
    int a=10,b=20;
    printf("addtion of two number:%d",add(&a,&b));

}

int add(int*x,int*y)
{
    return *x+*y;
}