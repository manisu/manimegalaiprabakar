#include<stdio.h>
void main()
{
int a[100],i,max;
printf("\n enter the numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n largest number is %d",max);
getch();
}
