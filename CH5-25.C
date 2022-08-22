#include<stdio.h>
#include<conio.h>

void main()
{ int n,sum,i;
clrscr();
printf("enter number to find sum on number::");
scanf("%d",&n);
sum = 0;
i=1;
do
{
  sum = sum + i;
  i++;
}while(i<=n);
printf("sum of n::%d",sum);
getch();
}
