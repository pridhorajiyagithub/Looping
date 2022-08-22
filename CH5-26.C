#include<stdio.h>
#include<conio.h>

void main()
{ int n,sum,i;
clrscr();
printf("enter number to find sum on number::");
scanf("%d",&n);
sum = 0;
i=1;
while(i<=n)
{
  sum = sum + i;
  i++;
}
printf("sum of n::%d",sum);
getch();
}
