#include<stdio.h>
#include<conio.h>
void main()
{
int a[25],n,k,i,sum=0;
clrscr();
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=k;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
getch();
}
