/* concept of prefix sum */
/*python 3 solution */
n,m=map(int,input().split())
l=[]
for i in range(n+1):
    l.append(0)
for k in range(m):
    a,b,k=map(int,input().split())
    l[a-1]+=k
    l[b]+=-k
maxium=x=0
for i in l:
    x=x+i
    if(maxium<x):
        maxium=x
print(maxium)
