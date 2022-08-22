#include<stdio.h>
#include<conio.h>

void main()
{ int n,i;
clrscr();
printf("enter number to find miltiplication number::");
scanf("%d",&n);


for(i=1;i<=10;i++)
{
  printf("%2d * %2d = %2d\n",n,i,n*i);
}

getch();
}
