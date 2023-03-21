#include<stdio.h>
int main()
{
    int wed_t,mon_t=31,tue_t=24;
    printf("enter the tempure\n");
    scanf("%d",&wed_t);
    if(wed_t>mon_t){
    printf("wed is hotter then mon and tue\n");
    }
    else if(mon_t>wed_t && tue_t<wed_t)
    {
       printf("wed is cooler then mon but hotter than tues\n");

    }
    else
    {
        printf("mon and tue is hotter");
        return 0;
    }

}