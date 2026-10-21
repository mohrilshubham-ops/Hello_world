#include <stdio.h>
int main()
{
int days;
const int spdays=3;
    printf("Welcome\n Our fees include room cost 2000rs per day\n food cost 500rs per day\n service cost 100rs per day\n");
    printf("Enter the number of days to be booked\n");
    scanf("%d",&days);
    int edays=days-spdays;
    float fdiscount=50*edays;
    float roomc=2000*days;
    float foodc=500*days;
    float servc=100*days;
    float bill1=roomc+foodc+servc-fdiscount;
    if(days>spdays)
    {
    printf("You are applicable for a discount as 50rs per extra days\n");
    printf("The discount amt is %f\n",fdiscount);
    printf("Your total bill estimate is\n room cost=2000* %d =%f\n food cost=500* %d =%f\n service cost=100* %d=%f\n Discount amount= 50* %d=%f\n",days,roomc,days,foodc,days,servc,edays,fdiscount);
    printf("Your total bill is %f rs\n",bill1);
    }
    else
   {
   float bill2=roomc+foodc+servc;
   printf("You are not applicable for a discount\n");
   printf("Your total bill estimate is\n room cost=2000* %d =%f\n food cost=500* %d =%f\n service cost=100* %d=%f\n",days,roomc,days,foodc,days,servc);
   printf("Your total bill is %f rs\n",bill2);
   }
   printf("Thank you for choosing us!!!\n Visit again soon!!!");
   return 0;
}

