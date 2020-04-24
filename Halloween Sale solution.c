#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main()
{
int p,d,m,s,key,count=0;
int cost=0,total_spent=0;
scanf("%d%d%d%d",&p,&d,&m,&s);
if(p>s)
printf("0");
else
{
cost=p;
while(cost > m && s>cost)
{
s=s-cost;
cost=cost-d;
count++;
}
if(s>cost)
printf("%d",count+s/m);
else 
printf("%d",count);
}
}
