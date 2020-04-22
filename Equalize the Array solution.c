#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a[101]={0},n,i,j,k,max=0;
int temp[100],sum=0,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&k);
a[k]++;   // count each digit frequency
}
max=a[0];
for(i=0;i<101;i++)
{
if(max<a[i])
max=a[i];            // find maxium frequency 
} 
for(i=0;i<101;i++)
{
if(max>a[i])
sum=sum+a[i];
else if(max==a[i])      // if all digit frequency is same either two or three digit frequency is same 
count++;
}
printf("%d",(sum)+max*(count-1));
}
