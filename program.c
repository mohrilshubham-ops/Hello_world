#include <stdio.h>
#include <math.h>
int main()
{
double principal;
double rate;
float tenure;
//Getting input values
     printf("Enter your principal\n");
     scanf("%lf",&principal);
     printf("Enter your tenure in years\n");
     scanf("%f",&tenure);
     printf("Enter your rate\n");
     scanf("%lf",&rate);
     printf("Your principal amt,tenure and rate are '%lf' '%f' and '%lf' respectively\n",principal,tenure,rate);
//Calculating compound interest
double factor=pow(1+(rate/100),tenure);
double compound_interest=principal*factor-principal;
     printf("Your compound interest during '%f' years is '%lf'\n",tenure,compound_interest);
     return 0;
}
