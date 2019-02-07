#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i;
scanf("%d",&x);
scanf("%d",&y);
for(i=x;i<y;i++)
{
if(i%2==0)
{
printf("%d\t",i);
}
}
getch();
}
