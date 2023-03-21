/*13 ROOT OF THE QUADRATIC EQUATION*/
#include<stdio.h>
#include<math.h>
int main(){
    double d,r1,r2;
    double a,b,c;
    printf("Enter a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=sqrt(b*b-(4*a*c));
    
    if(d>0){
        r1=(-b+d)/2*a;
        r2=(-b-d)/2*a;
    printf("The roots are:%lf %lf",r1,r2);
    }
    else if (d==0){
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf("The roots are equal and are:%lf %lf",r1,r2);
    }
    else{
        r1 = -b/(2*a);
        r2 = sqrt(-d)/(2*a);
        printf("root1:%lf+%lfi \t root2:%lf+%lfi",r1,r2,r1,r2);
    }
}
    
    
    //printf("The roots are:%f %f",r1,r2);