#include <stdio.h>
int main()
{
int S1,S2,S3,S4,S5;
float avg_marks;
float per_tage;
printf("Please enter the marks of all five subjects\n");
scanf("%d",&S1);
scanf("%d",&S2);
scanf("%d",&S3);
scanf("%d",&S4);
scanf("%d",&S5);
float sum=S1+S2+S3+S4+S5;
float term=sum/500;
avg_marks=sum/5;
per_tage=term*100;
printf("Your percentage and avg marks are %.2f and %.2f respectively\n",per_tage,avg_marks);
switch(per_tage>=0)
{
case 1:
switch(per_tage<=33)
{
case 1:
printf("FAIL\n");
break;
case 0:
switch(per_tage<=44)
{
case 1:
printf("3rd class\n");
break;
case 0:
switch(per_tage<=55)
{
case 1:
printf("2nd class\n");
break;
case 0:
switch(per_tage<=66)
{
case 1:
printf("1st class\n");
break;
case 0:
printf("DISTINCTION\n");
break;
}}}}
break;
default:
printf("Invalid Input!!!\n");
break;
}
printf("Thanks for using my grade calculation portal!!!\n");
return 0;
}
