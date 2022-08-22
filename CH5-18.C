#include<stdio.h>
#include<conio.h>
main()
{ int a,n;
clrscr();
printf("enter any value::");
scanf("%d",&n);
a=n;
while(a>=1)
{
 printf("%4d",a);
 a--;
}
getch();
}
