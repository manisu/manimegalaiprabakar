#include<stdio.h>
void main()
{
int a=0,b=1,c,i,n;
printf("\n enter the limit of the series");
scanf("%d",&n);
printf("\n Fibanocci series :");
printf("\n%d",a);
printf("\n%d",b);
for(i=0;i<n-2;i++)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
getch();
}
