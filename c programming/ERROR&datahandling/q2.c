#include<stdio.h>
//#pragma pack(1)
struct employe
{
    int a;
    char c;
    unsigned int reserves[3];
    double d;

}__attribute__((packed))tmp={10,'A',20};

int  main()

{
    printf("%d\n",sizeof(tmp));
    printf("value of a is %p\n",&tmp.a);
    printf("value of c is %p\n",&tmp.c);
    printf("value of d is %p\n",&tmp.d);

}