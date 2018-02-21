#include<stdio.h>
#include,string.h>
void main()
{
int a[100],l,i,flag=0;
printf("\n enter the string");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if((0<=a[i]<=9)&&('a'<=a[i]<='z'))
{
flag=1;
}
}
if(flag==1)
{
printf("\n yes");
}

getch();
}
