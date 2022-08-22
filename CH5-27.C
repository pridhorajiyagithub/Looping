#include<stdio.h>
#include<conio.h>

void main()
{ int n,sum,i;
clrscr();
printf("enter number to find sum on number::");
scanf("%d",&n);
sum = 0;

for(i=1;i<=n;i++)
{
  sum = sum + i;

}
printf("sum of n::%d",sum);
getch();
}
