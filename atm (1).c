#include <stdio.h>
#include <unistd.h>
int main()
{
    int UPIN;
    float Amount;
    int mode;
   const float balance1= 200000;
   const float balance2= 300000;
   const float balance3= 400000;
   const int PIN= 4579;
    printf("Enter your 4 digit PIN\n");
    scanf("%d",&UPIN);
    if (UPIN== 4579)
    {
        printf("Your PIN is correct!!!\n");
    }
    else 
    {
        printf("Your PIN is wrong!!!\n");
        return 0;
    }
    printf("From which account you want to withdraw\n 1]Savings Acc\n 2]Salary Acc\n 3]Daily Acc\n Enter the code\n");
    scanf("%d",&mode);
    if (mode==1||mode==2||mode==3)
    {
         printf("Your withdrawal acc code is:%d\n",mode);
    }
    else 
    {
          printf("Enter valid code !!!\n");
           return 0;
    }
    printf("Enter the amount to be withdrawed\n");
    scanf("%f",&Amount);
    if (Amount>balance1||balance2||balance3)
    {
        printf("Sorry,balance is not sufficient!!!");
    }
    else if (Amount<=balance1||balance2||balance3)
    {
        printf("The transaction is being processed\n Please wait\n ");
    sleep(5);
    printf("Your transaction is successful!!!\n Have a nice day!!!\n");
    }
     return 0;
}
