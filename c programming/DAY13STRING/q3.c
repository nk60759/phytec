//seperate each character in the string
#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("enter the string ");
    scanf("%s",str);
    for(i=0;i<8;i++)
    {
        printf("%c\t",str[i]);
    }
}