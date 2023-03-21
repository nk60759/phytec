#include<stdio.h>
int main(int argc,int *argv[])
{
	int sum=0,i,n;
	for(i=1;i<argc;i++)
	{
		sscanf(argv[i],"%d",&n);
		sum+=n;
	
	}
	printf("Sum is:%d\n",sum);
}
