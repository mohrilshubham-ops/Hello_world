#include <stdio.h>
int main()
{
float units;
const int tax=150;
const int R1=8;
const int R2=11;
const int R3=16;
const int R4=20;
float bill;
 printf("The rates for various values of units are as follows:\n 0-100 units=8rs per unit\n 100-200 units=11rs per unit\n 200-300 units=16rs per unit\n 300+ units=20rs per unit\n");
 printf("A charge of 150rs will be applicable to your final bill as service tax\n");
 printf("Please enter the number of units\n");
 scanf("%f",&units);
  switch(units>=0)
  {
  case 1:
  switch(units<100)
  {
  case 1:
  bill=units*R1+tax;
  printf("Your final bill is %.2frs\n",bill);
  break;
  case 0:
  switch(units<=200)
  {
  case 1:
  bill=100*R1+(units-100)*R2+tax;
  printf("Your final bill is %.2frs\n",bill);
  break;
  case 0:
  switch(units<=300)
  {
  case 1:
  bill=100*R1+100*R2+(300-units)*R3+tax;
  printf("Your final bill is %.2frs\n",bill);
  break;
  case 0:
  bill=100*R1+100*R2+100*R3+(units-300)*R4+tax;
  printf("Your final bill is %.2frs\n",bill);
  break;
}}}
break;
case 0:
printf("Invalid Input!!!\n");
break;
}
printf("Thanks for using my electricity bill calculation portal\n");
return 0;
}
