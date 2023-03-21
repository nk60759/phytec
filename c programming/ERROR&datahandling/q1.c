#include<stdio.h>
#pragma pack(1)
struct employe
{
    int a;
    char c;
    //int reserved[3];
    double d;

}__attribute__((packed))tmp={10,'a',20.14};

int  main()

{
    printf("%d\n",sizeof(tmp));
    printf("value of a is %p\n",&tmp.a);
    printf("value of c is %p\n",&tmp.c);
    printf("value of d is %p\n",&tmp.d);

} 
