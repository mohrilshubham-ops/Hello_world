#include <stdio.h>
int main()
{
char colour;
printf("Please enter the colour code from the options as follows:R:-Red,Y:-Yellow,G:-Green\n");
scanf("%c",&colour);
switch(colour)
{
case 'R':
printf("STOP\n");
break;
case 'Y':
printf("SLOW\n");
break;
case 'G':
printf("GO\n");
break;
default:
printf("Invalid colour code!!!\n");
break;
}
return 0;
}
