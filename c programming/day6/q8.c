/* build an atm pin*/
#include<stdio.h>
int main()
{
    int pin=1111,user_pin;
    printf("enter  your pin: ");
    scanf("%d",&user_pin);
    if(pin == user_pin)
    {
        printf("access granted");
    }
    else
    {
        printf("access denied");

    }
    return 0;

}