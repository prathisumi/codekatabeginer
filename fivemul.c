#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
scanf("%d",&n);
for (i=1;i<=5;i++)
{
    sum=sum+n;
    printf("%d\t",sum);
}
getch();
}
