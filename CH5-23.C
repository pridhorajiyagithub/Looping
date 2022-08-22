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
while(i<=n)
{
  fac = fac * i;
  i++;
}
printf("factorial of n::%d",fac);
getch();
}
