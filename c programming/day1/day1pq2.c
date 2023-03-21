#include<stdio.h>
#include<math.h>
int main(){
int a,y,w,d;
a=1329;
y=(a/365);
w=(a-(y*365))/7;
d=(a-(y*365)-(w*7));
printf("years:%d\n",y);
printf("weeks:%d\n",w);
printf("days:%d\n",d);
return 0;
}
