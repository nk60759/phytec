#include<stdio.h>

struct emp
{
    int empno;
    float sal;
    char ename[20];

}emp;
   int main()
   {
    printf("size of emp :%d\n",sizeof(emp));
    
   }