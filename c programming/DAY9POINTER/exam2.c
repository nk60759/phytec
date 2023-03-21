#include<stdio.h>
int main(){
    int a=10;
    float f=10.4;
    char ch='a';
    void *p;
    p=&a;
    printf("value of a%d",*(int*)p);
    p=&f;
    printf("value of f%f",*(float*)p);
    p=&ch;
    printf("value of a%c",*(char*)p);
}