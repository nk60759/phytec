#include<stdio.h>
int(*func)(int,int);
int add(int,int);
int sub(int,int);
int main(){
int result;
char a;
printf("enter your choice");
scanf("%c",&a);



if(a=='+')
{
func=&add;
result=(*func)(10,20);
printf("value of add%d",result);
}
else if(a=='-')
{
func=&sub;
result=(*func)(10,20);
printf("value of sub%d",result);
}
}
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
     return x-y;
}