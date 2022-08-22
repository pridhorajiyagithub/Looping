#include<stdio.h>
#include<conio.h>
main()
{int n,i;
clrscr();
printf("enter any number::");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
printf("%4d",i);
}
getch();
}
