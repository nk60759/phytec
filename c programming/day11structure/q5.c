#include<stdio.h>
#include<string.h>

struct emp
{
    int empno;
    float sal;
    char ename[10];

};
int main()
{
   struct emp emp1;
   printf("enter the value ");
   scanf("%d\n %s\n %f\n",&emp1.empno,&emp1.sal,&emp1.ename);
   printf("%d\n%s\n%f\n",emp1.empno,emp1.ename,emp1.sal);
   }
