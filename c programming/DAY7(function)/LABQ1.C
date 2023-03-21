#include<stdio.h>
int add();
int sub();
int mul();
int div();
int main()
{
    int a,b;
    add();
    sub();
    mul();
    div();

}
int add()
{
int a,b;
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
printf("a+b:%d\n",a+b);
}
int sub()
{
int a,b;
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
printf("a-b:%d\n",a-b);
}
int mul()
{
int a,b;
printf("enter the value of aand b\n");
scanf("%d%d",&a,&b);
printf("a*b:%d\n",a*b);
}
int div()
{
int a,b;
printf("enter the value of aand b\n");
scanf("%d %d",&a,&b);
printf("a/b:%d\n",a/b);
}