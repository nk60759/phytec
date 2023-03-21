/*implement arthimatic operatin using enum*/
#include<stdio.h>
int main()
{
   int a,b,cho;
   enum {add=1,sub,mul,div,square};
   printf("\n menu \n");
   printf("1. add \n");
   printf("2. sub \n");
   printf("3. mul \n");
   printf("4. div \n"); 
   printf("\n enter your choice");
   scanf("%d",&cho);
   scanf("%d %d",&a,&b);
   switch(cho)
   {
    case 1:
   
    printf("value%d",a+b);
    
    break;

   case 2:
    printf("value%d%d",a-b);
    break;

    case 3:
    printf("value%d",a*b);
    break;

    case 4:
    printf("value%d",a/b);
    break;

   } 
   return 0;
}