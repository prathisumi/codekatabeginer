#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,c=0;
clrscr();
scanf("%d",&a);
scanf("%d",&b);
for(i=a;i<=b;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
c=1;
}
if(c==0)
printf("%d",i);
}
getch();
}
