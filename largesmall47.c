#include<stdio.h>
void main()
{
int a[50],large,small,i,n;
printf("\n Enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=small=a[0];
for(i=0;i<n;i++)
{  
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("\n largest=%d",large);
printf("\n smallest=%d",small);
getch();
}


