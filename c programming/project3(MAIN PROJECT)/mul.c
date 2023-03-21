#include<stdio.h>
int multiply()  
{  
    float n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %f", &n1);  
    printf (" The second number is: ");  
    scanf ("  %f", &n2);  
    res = n1 * n2;    
    printf (" The product is: %.2f", res);  
}