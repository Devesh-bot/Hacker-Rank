#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<assert.h>
int main()
{
int size1,size2,i,j,k,key1,key2,min;
scanf("%d%d",&size1,&size2);
size2+=size2;
int a[size1],b[size2];
for(i=0;i<size1;i++)
scanf("%d",&a[i]);

for(i=0;i<size2;i++)
scanf("%d",&b[i]);

for(i=0;i<size2;i=i+2)
{
key1=b[i];
key2=b[i+1];
min=a[key1];
for(j=key1;j<=key2;j++)
{
if(min>=a[j])
{
min=a[j];
}
}
printf("%d\n",min);
}
}
