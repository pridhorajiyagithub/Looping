#include<stdio.h>
#include<conio.h>
main()
{int n,i;
clrscr();

printf("enter any number::");
scanf("%d",&n);
i=n;
do
{
printf("%4d",i);
i--;
}while(i>=1);
getch();
}
