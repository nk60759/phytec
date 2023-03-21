#include<stdio.h>
int math(int m){
    if(m<=33){
        printf("Fail");
    }
    else if(m>33 && m<=40){
        printf("F");
    }
    else if(m>40 && m<=50){
        printf("E");
    }
    else if(m>50 && m<=60){
        printf("D");
    }
    else if(m>60 && m<=70){
        printf("C");
    }
    else if(m>70 && m<=80){
        printf("B");
    }
    else if(m>80 && m<=90){
        printf("A");
    }
    else if(m>90 && m<=100){
        printf("O");
    }
    else{
        printf("Wrong Input");
    }
}