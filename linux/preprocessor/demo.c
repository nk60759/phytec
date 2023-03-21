#include<stdio.h>
#define POSITIVE
#define NEGATIVE
int main()
{
#ifdef POSITIVE
	int a=10,b=20;
#endif
#ifdef NEGATIVE
	int a=-10 b=-20;
#endif
	printf("\n%d+%d\n",a,b,a+b);

}
