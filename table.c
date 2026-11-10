#include <stdio.h>
int main()
{
int N;
int pro=1;
int i=1;
printf("This multiplication table contains numbers from 1 to 30\n");
printf("Enter the number of which table is needed\n");
scanf("%d",&N);
while(i<=10)
{
pro=N*i;
printf("\n%d\n",pro);
i++;
}
return 0;
}
