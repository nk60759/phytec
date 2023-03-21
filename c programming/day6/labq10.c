/*q20*/
#include<stdio.h>
int main(){
    int fib,nt,t1=0,t2=1,n;
    printf("Enter n:");
    scanf("%d",&n);
    nt=t1+t2;
    printf("0,1,");
    for(int i = 3; i <= n; ++i) {
    printf("%d,", nt);
    t1 = t2;
    t2 = nt;
    nt = t1 + t2;
  }
}