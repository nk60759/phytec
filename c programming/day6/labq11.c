/*21*/
//GCD of 2 numbers
#include<stdio.h>
int main(){
    int a,b,gcd;
    printf("Enter two numbers to find gcd:");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
            //printf("%d",i);
            
        }
    }
    printf("GCD is:%d",gcd);
}