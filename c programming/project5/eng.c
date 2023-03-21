#include<stdio.h>
int eng(int e){
    if(e<=33){
        printf("Fail");
    }
    else if(e>33 && e<=40){
        printf("F");
    }
    else if(e>40 && e<=50){
        printf("E");
    }
    else if(e>50 && e<=60){
        printf("D");
    }
    else if(e>60 && e<=70){
        printf("C");
    }
    else if(e>70 && e<=80){
        printf("B");
    }
    else if(e>80 && e<=90){
        printf("A");
    }
    else if(e>90 && e<=100){
        printf("O");
    }
    else{
        printf("Wrong Input");
    }
}