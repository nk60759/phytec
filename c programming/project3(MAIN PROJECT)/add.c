#include<stdio.h>
int addition()  
{  
    int i, num; 
    float sum=0,f_num;  
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %f", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" Total Sum of the numbers = %.2f", sum);  
    return 0;  
} 