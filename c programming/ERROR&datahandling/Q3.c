#include<stdio.h>
#pragma pack(1)
struct employe
{
    int a;
    char c;
    //unsigned char zero[3];
    double d;

}temp={10,'a',{0,0,0,},20.14};

int  main()

{
     printf("\n size of the is struct %d:",sizeof(temp));
    char*ptr=(double*)&temp;
  // printf("\n value of d is %lf:",*(double*)(ptr+0));
    printf("\n value of d is %d:",*(int*)(ptr+0));
    

}