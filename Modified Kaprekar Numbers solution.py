from math import floor,ceil
a=int(input())
b=int(input())
k=[]
for i in range(a,b+1):
      n=i**2
      s=str(n)
      p=len(s)
      key1=ceil(p/2)
      x=n%(10**key1)
      y=(n-x)/(10**key1)
      if(x+y==i):
          k.append(str(i))
output=' '.join(k)
if(output==''):
    print("INVALID RANGE")
else:
    print(output)
