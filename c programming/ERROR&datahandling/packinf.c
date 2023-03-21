#include<stdio.h>
#pragma pack(1)
struct employe
{
    int a;
    char c;
    double d;

}__attribute__((packed))temp={10,'A',20.14};

int  main()

{
     printf("\n size of the is struct %d:",sizeof(temp));
    char*ptr=(double*)&temp;
    printf("\n value of d is %lf:",*(double*)(ptr+5));
    //printf("\n value of d is %d:",*(int*)(ptr+0));
    

}