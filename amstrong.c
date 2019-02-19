#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,rem,sum=0,i;
scanf("%d",&n);
a=n;
while(a!=0)
{
a=a/10;
rem=a%10;
sum=sum+rem*rem*rem;
}
if (n==sum)
{
  printf("yes");
}
  else
  {
    printf("no");
  }
  getch();
}  
