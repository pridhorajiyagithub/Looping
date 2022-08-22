#include<stdio.h>
#include<conio.h>

void main()
{ int n1,n2,i,j;
clrscr();
printf("enter  fist number::");
scanf("%d",&n1);
printf("enter last number");
scanf("%d",&n2);

for(i=n1;i<=n2;i++)
{
  for(j=1;j<=10;j++)
  {
    printf("%d * %d = %d\n",i,j,j*i);
  }
  printf("\n");
}
getch();
}
