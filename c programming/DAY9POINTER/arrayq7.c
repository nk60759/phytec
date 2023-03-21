/*#include<stdio.h>
void main(){
    static int a[]={7,8,9};
    printf("%d",2[a]+a[2]);

}*/
#include<stdio.h>
int main()
{
    int arr[]={10,11,12,15,23};
    printf("%u,%u\n",arr,&arr[3]);
}