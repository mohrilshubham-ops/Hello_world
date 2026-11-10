#include <stdio.h>
int main()
{
float a,b;
int response;
printf("Enter the two numbers as a and b respectively\n");
scanf("%f" "%f",&a,&b);
printf("Please enter the choice code from the following\n 1Addition 2Subtraction 3Multiplication 4Division 5Modulo division\n");
scanf("%d",&response);
switch(response)
{
case 1:
float sum=a+b;
printf("Your answer is %f\n",sum);
break;
case 2:
float diff=a-b;
printf("Your answer is %f\n",diff);
break;
case 3:
float pro=a*b;
printf("Your answer is %f\n",pro);
break;
case 4:
 switch(b!=0)
 {
 case 1:
float quo=a/b;
printf("Your answer is %f\n",quo);
break;
 case 0:
 printf("Division by zero is not valid!!!\n");
 break;
}
break;
case 5:
int A=a;
int B=b;
int mod=A%B;
printf("Your answer is %d\n",mod);
break;
default:
printf("Invalid choice code entered!!!\n");
}
printf("Thanks for using my calculation portal!!!\n");
return 0;
} 
