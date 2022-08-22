#include<stdio.h>
#include<conio.h>

void main()
{ int n,i;
clrscr();
printf("enter number to find miltiplication number::");
scanf("%d",&n);

i=1;
do
{
  printf("%2d * %2d = %2d\n",n,i,n*i);
  i++;
}while(i<=10);

getch();
}
