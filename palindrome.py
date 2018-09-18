n=int(input())
s=0
i=0
x=n
r=0
s=0
while(x!=0)
  r=r%10
  s=s*10+r
  x=x/10
if(s==n):
  print("yes")
else :
  print("no")
