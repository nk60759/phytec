#include<stdio.h>
int chem(int c){
    if(c<=33){
        printf("Fail");
    }
    else if(c>33 && c<=40){
        printf("F Grade");
    }
    else if(c>40 && c<=50){
        printf("E Grade");
    }
    else if(c>50 && c<=60){
        printf("D Grade");
    }
    else if(c>60 && c<=70){
        printf("C Grade");
    }
    else if(c>70 && c<=80){
        printf("B Grade");
    }
    else if(c>80 && c<=90){
        printf("A Grade");
    }
    else if(c>90 && c<=100){
        printf("O Grade");
    }
    else{
        printf("Wrong Input");
    }
}