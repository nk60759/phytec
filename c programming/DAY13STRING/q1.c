#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter the value: ");
     //fgets(str,sizeof(str),stdin);
    scanf("%s",str);
   fgets(str,sizeof(str),stdin);
    printf("%s",str);
  return 0;

}
