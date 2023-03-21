#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[30];
    FILE*fp;
    printf("\nenter new file name:");
    scanf("%[^\n]");
    fp=fopen(name,"w");
    if(fp==NULL)
    {
        printf("\n fail to create a file \n");
        exit(1);

    }
    printf("\n file created succesfully\n");
    
}