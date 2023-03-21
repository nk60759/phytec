#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,n,i;
printf("\n enter how maany elements;");
scanf("%d",&n);
p=(int*) malloc(n*sizeof(int));
if (p==NULL)
{
    fprintf(stderr,"\nfail to alloct memerory\n");

}
printf("\n memeory allocataion at :%x",p);
printf("\n intial values\n");
for(i=0;i<n;i++)
printf("%d",p[i]);
for(i=0;i<n;i++)
p[i]=i+1;
printf("\n");
for(i=0;i<n;i++)
printf("%d",p[i]);
printf("\n");
}