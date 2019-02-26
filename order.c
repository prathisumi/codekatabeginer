#include<stdio.h>
#include<conio.h>
void main()
{
int a[10000],n,i,temp,max;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for (i=1;i<=n-1;i++)
{
   if (max>a[i])
   {
       temp=max;
        max=a[i];
        a[i]=max;
   }
}
for (i=0;i<=n-1;i++)
{
    printf("%d",a[i]);
}
getch();
}
