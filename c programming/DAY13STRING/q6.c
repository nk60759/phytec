#include<stdio.h>
#include<string.h>
int main()
{
    char string1[50];
    char string2[50];
    int i,n=0,p=0;
    printf("Enter the string1: \n");
    gets(string1);
    printf("Enter the string2: \n");
    gets(string2);
    for (i = 0; string1[i] != '\0'; i++)
    {
        n++;
    }
    for (i = 0; string2[i] != '\0'; i++)
    {
        p++;
    }
    if(n==p)
    {
        printf("Strings are equal");
    }else
    {
        printf("Not equal");
    }
}