#include <stdio.h>
int main()
{
float a,b;
int response;
printf("Please enter the two numbers on which operation is to be performed\n");
scanf("%f" "%f",&a,&b);
printf("Enter the proper choice code for which operation is to be performed on those two numbers\n 1Addition 2Subtraction 3Multiplication 4Division 5Modulo div\n");
scanf("%d",&response);
if((response==1)||(response==2)||(response==3)||(response==4)||(response==5))
{
printf("Thanks for cooperating by entering valid choice code\n");
}
else
{
printf("Invalid choice code entered!!!\n");
return 0;
}
if(response==1)
{
float sum=a+b;
printf("Your answer is %f\n",sum);
}
else if(response==2)
{
float diff=a-b;
printf("Your answer is %f\n",diff);
}
else if(response==3)
{
float pro=a*b;
printf("Your answer is %f\n",pro);
}
else if(response==4)
{
float quo=a/b;
 if(b!=0)
{
 printf("Your answer is %f\n",quo);
}
 else
 {
 printf("Division by zero is not valid!!!\n");
 return 0;
 }
}
else
{
int A=a;
int B=b;
int mod=A%B;
printf("Your answer is %d\n",mod);
}
printf("Thanks for using my calculation portal!!!\n");
return 0;
}
