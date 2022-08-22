#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n1,n2;
 clrscr();
 printf("enter first value::");
 scanf("%d",&n1);
 printf("enter last value::");
 scanf("%d",&n2);

/* for(i=n1;i<=n2;i++)
 {
  for(j=1;j<=10;j++)
  {
   printf("%d * %d = %d\n",i,j,i*j);
  }
  printf("\n");
 }*/
 i=n1;

 while(i<=n2)
 {
  j=1;
  while(j<=10)
  {
   printf("%d * %d = %d\n",i,j,i*j);
   j++;
  }
  i++;
   printf("\n");
 }
 getch();
}