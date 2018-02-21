#include<stdio.h>
void main()
{
int a,b,c;
printf("\n enter the numbers");
scanf("%d\t%d",&a,&b);
c=a;
a=b;
b=c;
printf("\n the values after swapping:%d\t%d",a,b);
getch();
}
