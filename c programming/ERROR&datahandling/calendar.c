#include<stdio.h>
struct cal
{
    unsigned int m:5;
    unsigned int d:4;
    unsigned int y:12;
}dat;
int main()
{
    int day,month,year;
    printf("enter the day:\n");
    scanf("%d",&day);
    printf("enter the month:\n");
    scanf("%d",&month);
    printf("enter the year:\n");
    scanf("%d",&year);
    dat.d=day;
    dat.m=month;
    dat.y=year;
    printf("current day is :%d:%d:%d\n",dat.d,dat.m,dat.y);

}