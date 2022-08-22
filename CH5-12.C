#include<stdio.h>
#include<conio.h>
main()
{int a=10;
clrscr();
do
{
  if(a%2==0)
  {
   printf("%d\n",a);
  }
  a--;
}while(a>=1);
getch();
}
