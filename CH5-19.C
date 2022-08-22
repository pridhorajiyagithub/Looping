#include<stdio.h>
#include<conio.h>
// leap year
void main()
{ int year;
clrscr();
for(year=2000;year<=3000;year++)
{
  if(year%400==0 || (year%4==0 && year%100!=0))
  {
     printf("%5d",year);
  }

}
getch();
}
