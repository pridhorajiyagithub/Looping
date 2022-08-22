#include<stdio.h>
#include<conio.h>
// leap year
void main()
{ int n,fac,i;
clrscr();
printf("enter number to find factorial::");
scanf("%d",&n);
fac = 1;
i=1;
do
{
  fac = fac * i;
  i++;
}while(i<=n);
printf("factorial of n::%d",fac);
getch();
}
