#include<stdio.h>
#pragma pack(1)
struct cal
{
    unsigned int m:4;
    unsigned int d:5;
    unsigned int y:12;
}__attribute__((packed))dat;
int main ()
{
    printf("size is :%d\n",sizeof(dat));
   
    
}