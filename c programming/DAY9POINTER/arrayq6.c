/*#include<stdio.h>
void main()
{
    int arr[]={12,14,15,23,45};
    printf("%u,%u",arr,&arr);
    
}*/
#include<stdio.h>
void main()
{
    float arr[]={12.4,2.3,4.5,6.7};
    printf("%d",sizeof(arr)/sizeof(arr[0]));
}
