#include<stdio.h>
#include"subject.h"
int main(){
    int s;
    char name;
    printf("Enter you name:");
    scanf("%s",&name);
    printf("Enter your SIC:");
    scanf("%d",&s);
    printf("Grade in Physics:\n",phy(80));
    printf("Grade in Maths:\n",math(70));
    printf("Grade in Chemistry:\n",chem(60));
    printf("Grade in English:\n",eng(30));
    printf("Grade in Hindi:\n",hin(45));
    printf("Grade in Odia:\n",odia(92));
}