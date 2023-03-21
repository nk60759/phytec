#include<stdio.h>
#include<math.h>
int divide()  
{  
    float n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %f", &n1);  
    printf (" The second number is: ");  
    scanf ("  %f", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%f", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n The division of %f / %f is: %.3f", n1, n2, res);  
}  