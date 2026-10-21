#include <stdio.h>
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
float factor= 1+(rate/100);
double initial_principal=principal;
for(int i=1;i<=tenure;i++)
{
principal=principal*factor;
}
float compound_interest=principal-initial_principal;
      printf("Your compound interest during the period of '%f' years is '%f'\n",tenure,compound_interest);
 return 0;

}

