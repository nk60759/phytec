#include <stdio.h>  
#include <stdlib.h>  
#include"head.h"

int main()  
{   
    int op;  //local variable
    do{  //using a do while loop
     
        printf (" Select an operation to perform the calculation : ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");      
          
        scanf ("%d", &op);// ask user to i\p from the options display on the screen  
      
      
    switch (op) // using switch case  
    {  
        case 1:  //if case 1 is choosen adding is performed
            addition();   
            break; 
              
        case 2:  //if case 2 is choosen subtraction is performed
            subtract(); 
            break; 
              
        case 3:  //if case 3 is choosen multiply is performed
            multiply(); 
            break; 
              
        case 4:  //if case 4 is choosen divide is performed
            divide();   
            break; 
              
        case 5:  //if case 5 is choosen square is performed
            sq();  
            break; 
              
        case 6:  //if case 6 is choosen sqrt is performed
            sqrt1(); 
            break;  
              
        case 7: //if case 7 is choosen exit is performed 
            exit(0);  
            break; 
              
        default:  // if any other option is choosen then it print something is wrong
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n ********** \n "); 
    }
    while(op!=7); 
    
      
    return 0;        
}  