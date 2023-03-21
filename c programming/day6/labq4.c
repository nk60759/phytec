/*check the leap year*/
#include<stdio.h>
int main(){
    int year;
    printf("Enter year to check:");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100!=0){
            printf("Leap Year");
        }
        else if(year%400==0){
        printf("Leap Year");
        }
    }
    else{
        printf("Not leap year");
    }
}