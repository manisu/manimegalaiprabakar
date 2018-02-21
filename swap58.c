#include<stdio.h>
void main()
{
int a=10,b=20;
printf("\n values before swapping %d\t%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n values after swapping%d\t%d",a,b);
getch();
}
