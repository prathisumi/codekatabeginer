#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,rem,sum=0,i,b;
scanf("%d",&n);
scanf("%d",&b);
for(i=n;i<b;i++)
{
a=i;
while(a!=0)
{
a=a/10;
rem=a%10;
sum=sum+rem*rem*rem;
}
if (i==sum)
{
  printf("%d\t",i);
}
}
  getch();
}  
