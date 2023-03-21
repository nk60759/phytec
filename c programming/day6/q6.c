/*size of data type and qualifier*/
#include<stdio.h>;
int main(){

    int a=1;
    float b=1.1;
    char c='a';
    double d=2.11111111;
    short int e=99;
    long int f=3444444;
    unsigned int g=5;
    printf("%zu\n",sizeof(a));
    printf("%zu\n",sizeof(b));
    printf("%zu\n",sizeof(c));
    printf("%zu\n",sizeof(d));
    printf("%zu\n",sizeof(e));
    printf("%zu\n",sizeof(f));
    printf("%zu\n",sizeof(g));
    return 0;
}