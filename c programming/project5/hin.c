#include<stdio.h>
int hin(int h){
    if(h<=33){
        printf("Fail");
    }
    else if(h>33 && h<=40){
        printf("F");
    }
    else if(h>40 && h<=50){
        printf("E");
    }
    else if(h>50 && h<=60){
        printf("D");
    }
    else if(h>60 && h<=70){
        printf("C");
    }
    else if(h>70 && h<=80){
        printf("B");
    }
    else if(h>80 && h<=90){
        printf("A");
    }
    else if(h>90 && h<=100){
        printf("O");
    }
    else{
        printf("Wrong Input");
    }
}