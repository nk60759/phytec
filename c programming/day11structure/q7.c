#include<stdio.h>
#include<string.h>
#define MAX 2
struct employee
{
    int empid;
    float empsal;
    char empname;

};
int lcd_emp_display(struct employee emp[])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("%d\n %s\n%f\n",emp[i].empid,emp[i].empsal,emp[i].empname);
    }
}
int main()
{
    int i;
    struct employee emp[MAX]={{1,20000,"pri"},{2,30000,"ni"}};
    lcd_emp_display(emp);
}