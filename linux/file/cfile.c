#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[30];
	FILE*fp;
	printf("\n enter new file name ");
	scanf("%[^\n]",name);
	fp=fopen(name,"w");
	if(fp==NULL)
	{
	printf("\n fail to create a file ");
	exit(1);

	}
	printf("\n file created succefuly");
}
