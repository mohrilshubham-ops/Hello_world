#include <stdio.h>
int main()
{
int N;
int pro=1;
printf("Enter the number of which factorial is to be calculated\n");
scanf("%d",&N);
int i=N;
while(i>1)
{
pro=pro*i;
i--;
}
printf("Factorial of %d is %d\n",N,pro);
return 0;
}
