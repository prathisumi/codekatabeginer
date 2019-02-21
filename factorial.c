#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=1;
scanf("%d",&n);
for (i=2;i<=n;i++)
{
    sum=sum*i;
}
printf("%d",sum);
getch();
}
