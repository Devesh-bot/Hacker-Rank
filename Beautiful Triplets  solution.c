/* solution of Beautiful Triplets */
/* concept -Hashing complexity-n^2 in worst case */
#include<stdlib.h>
#include<stdio.h>
int main()
{
long int n,d,i=0,key,j;
scanf("%ld%ld",&n,&d);
long int a[100000]={0},k,count,no_of_triplets,max=0;
for(i=0;i<n;i++)
{
scanf("%ld",&k);
a[k]++;
}
max=a[0];
for(i=0;i<100000;i++)
{
if(max<a[i])
max=a[i];
count=0;
if(a[i] != 0 )
{
j=i;
key=a[i];
while(key)
{
if(count==3)
break;
else 
{
count++;
j=j+d;
key=a[j];
}
}
}
if(count==3)
no_of_triplets++;
}
printf("%ld",(no_of_triplets*max));
}
