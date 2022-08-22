#include<stdio.h>
#include<conio.h>
// leap year
void main()
{ int year=2000;
clrscr();
do
{
  if(year%400==0 || (year%4==0 && year%100!=0))
  {
     printf("%5d",year);
  }
  year++;

}while(year<=3000);
getch();
}
