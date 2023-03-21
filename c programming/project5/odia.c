#include<stdio.h>
int odia(int o){
    if(o<=33){
        printf("Fail");
    }
    else if(o>33 && o<=40){
        printf("F");
    }
    else if(o>40 && o<=50){
        printf("E");
    }
    else if(o>50 && o<=60){
        printf("D");
    }
    else if(o>60 && o<=70){
        printf("C");
    }
    else if(o>70 && o<=80){
        printf("B");
    }
    else if(o>80 && o<=90){
        printf("A");
    }
    else if(o>90 && o<=100){
        printf("O");
    }
    else{
        printf("Wrong Input");
    }
}