#include<stdio.h>
#include<string.h>
#define MAX 3

struct emp
{
    int empno;
    float sal;
    char ename[10];

};
int main()
{
   struct emp emp1[MAX]={{10,3000,"alex"},{11,4000,"herry"},{12,5000,"hello"}};
   for(int i=0;i<MAX;i++)
   {
   printf("%d\n%s\n%f\n",emp1[i].empno,emp1[i].ename,emp1[i].sal);
   }
}

