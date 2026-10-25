#include <stdio.h>
int main()
{
long int tpro;
long int boxcap;
long int compbox;
long int leftpro;
long int tbox;
 printf("Welcome to my box calculations portal\n PLease enter the value of total products and box capacity values less than or equal to 647\n Your box capacity should be less than or equal to the total products\n");
 printf("Please enter the total number of products needed to be packed\n");
 scanf("%ld",&tpro);
 printf("Please enter the box capacity\n");
 scanf("%ld",&boxcap);
 if((tpro<=647)&&(tpro>0)&&(boxcap<=647)&&(boxcap>0)&&(tpro>boxcap))
 {
 printf("Thanks for cooperating by entering the valid values\n You can proceed to our next steps\n");
 }
 else
 {
 printf("Please enter the valid values for total products and box capacities\n");
 return 0;
 }
compbox=tpro/boxcap;
 printf("The complete boxes needed are %ld\n",compbox);
leftpro=tpro % boxcap;
 printf("The leftover products are %ld\n",leftpro);
 if(leftpro>0)
 {
 tbox=compbox+1;
 printf("There are some leftover products\n So total number of boxes required are %ld\n",tbox);
 }
 else
 {
 tbox=compbox;
 printf("There are no leftover products\n The total number of boxes required are %ld\n",tbox);
 }
 printf("The complete boxes required,leftover products and total boxes required are %ld %ld and  %ld respectively\n",compbox,leftpro,tbox);
 printf("Thanks for using my portal for box calculations\n Have a nice day ahead!!!\n");
 return 0; 
}
