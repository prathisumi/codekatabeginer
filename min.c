#include<stdio.h>
#include<conio.h>
void main()
{
int a[100000],n,i,temp,min;
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n-1;i++)
{
if(max>a[i])
{
max=a[i];
}
}
printf("%d",min);
}
