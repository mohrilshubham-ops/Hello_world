#include <stdio.h>
int main()
{
int tcapacity;
int prate;
float timereq=0.2f;
int iwater;
int wtfilled;
 printf("Welcome to my tank filling calculation portal\n Portal accepts values of total capacity which is less than or equal to 128 litres please cooperate by entering valid value\n");
 printf("Please enter the total capacity of the tank in litres to be filled\n");
 scanf("%d",&tcapacity);
 if(tcapacity<=128)
 {
 printf("Thanks for cooperating by entering the valid value for total tank capacity\n");
 }
 else
 {
 printf("Sorry you have not cooperated by entering valid value!!!\n You cannot use our portal\n");
 return 0;
 } 
 printf("Please enter the initial water present in the tank before filling\n");
 scanf("%d",&iwater);
 if(iwater==tcapacity)
 {
 printf("Your tank is filled to its maximum capacity!!!\n");
 return 0;
 }
 else if(iwater<tcapacity)
 {
 printf("Your tank is not filled to its maximum capacity you can proceed to our next steps!!!\n");
 }
 else
 {
 printf("Please enter valid value for initial water present in the tank\n");
 return 0;
 }
 printf("Please enter the pump rate in litres per minute\n");
 scanf("%d",&prate);
 
wtfilled=tcapacity-iwater;
printf("The water to filled in litres to get the tank filled fully is %dlts\n",wtfilled);
if(wtfilled % prate==0)
{
printf("Your water to be filled and pump rate exact multiple of each other\n");
}
else
{
printf("Your water to be filled and pump rate are not exact multiple of each other\n");
}
timereq=wtfilled/prate;
printf("The total time required to fill the tank to its full capacity in minutes is %fmin\n",timereq);
printf("Thanks for using my portal for performing tank filling calculations\n Have a nice day ahead!!!\n");
return 0;
}
