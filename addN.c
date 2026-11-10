#include <stdio.h>
int main()
{
int i=1;
int sum=0;
int N;
printf("Enter the number\n");
scanf("%d",&N);
while(i<=N)
{
sum=sum+i;
i++;
}
printf("Your sum of first %d natural numbers is %d\n",N,sum);
return 0;
}
