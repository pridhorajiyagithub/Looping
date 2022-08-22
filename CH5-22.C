#include<stdio.h>
#include<conio.h>
// leap year
void main()
{ int n,fac=1,i;
clrscr();
printf("enter number to find factorial::");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  fac = fac * i;

}
printf("factorial of n::%d",fac);
getch();
}
