#include<stdio.h>
void main()
{
int n,m,p;
printf("\n enter the numbers");
scanf("%d\t%d",&n,&m);
p=n*m;
if(p%2==0)
  printf("\n product is even");
else
  printf("\n prodduct is odd");
getch();
}
