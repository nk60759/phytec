#include<stdio.h>
int phy(int p){
    if(p<=33){
        printf("Fail");
    }
    else if(p>33 && p<=40){
        printf("F Grade");
    }
    else if(p>40 && p<=50){
        printf("E Grade");
    }
    else if(p>50 && p<=60){
        printf("D Grade");
    }
    else if(p>60 && p<=70){
        printf("C Grade");
    }
    else if(p>70 && p<=80){
        printf("B Grade");
    }
    else if(p>80 && p<=90){
        printf("A Grade");
    }
    else if(p>90 && p<=100){
        printf("O Grade");
    }
    else{
        printf("Wrong Input");
    }
}