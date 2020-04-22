/* python 3 */
//use slice operator property
from math import sqrt,floor,ceil
n=input()
length=len(n)
key1=floor(sqrt(length))
key2=ceil(sqrt(length))
for i in range(0,key1+1):
    index=i
    for j in range(0,key1+1):
        print(n[index:index+1],end='')
        index=index+key2
    print(end=' ')

