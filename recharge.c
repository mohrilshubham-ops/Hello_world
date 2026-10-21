#include <stdio.h>
int main()
{
float recharge;
const float specific=500;
    printf("Enter your mobile recharge amount\n");
    scanf("%f",&recharge);
    printf("The tax amount will be added to your final bill as per 10 percent\n"); 
    if (recharge>specific)
    {
    const float tax=10;
    float extra=recharge*(tax/100);
    float bill1=recharge+extra-20;
    printf("Your mobile recharge amount exceeds the specific bonus amount\n a bonus amount of 20rs will be deducted from your final bill\n");
    printf("Your final bill estimation is\n Recharge amount=%f\n Tax amount=%f\n Bonus amount=20rs\n",recharge,extra);
    printf("Your final bill is = %f\n",bill1);
    }
    else
    {
    const float tax=10;
    float extra=recharge*(tax/100);
    float bill2=recharge+extra;
    printf("Your mobile recharge amount does not exceed the specific bonus amount\n no bonus will be deducted from your final bill\n");
    printf("Your final bill estimation is\n Recharge amount=%f\n Tax amount=%f\n Bonus amount= 0rs\n",recharge,extra);
    printf("Your final bill is = %f\n",bill2);
    }
printf("Your mobile recharge is done successfully!!!\n Thank you for choosing us!!!\n");
return 0;
}
