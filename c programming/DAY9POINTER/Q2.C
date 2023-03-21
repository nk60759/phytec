//CALL BY REFERANCE arthmetic
#include<stdio.h>
int add(int *,int *);
int sub(int *,int *);
int mul(int *,int *);
int div(int *,int *);
int main()
{
    int a=10,b=20;
    printf("addition is:%d\n",add(&a,&b));
    printf("sub is:%d\n",sub(&a,&b));
    printf("mul is:%d\n",mul(&a,&b));
    printf("div is:%d\n",div(&a,&b));

}
int add(int*a,int*b)
{
    return *a+*b;
}
int sub(int*a,int*b)
{
    return *a-*b;
}
int mul(int*a,int*b)
{
    return *a**b;
}
int div(int*a,int*b)
{
    return *a/(*b);
}