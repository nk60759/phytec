#include<stdio.h>
#define ODD
\\#define EVEN
int main()
{
#if  defined EVEN
	int a=12,b=14;
#elif defined ODD
	int a=11,b=13;
#else
	int a=0,b=0;
#endif
	printf("\n sum of two number:%d\n",a+b);

}
