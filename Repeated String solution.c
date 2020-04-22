#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char s[100];
long int n,k,count=0,key,remainder,l=0,count2;
int i;
scanf("%s",s);
scanf("%ld",&n);
for(i=0;i<strlen(s);i++)
{
if(s[i]=='a')
count++;
}
if(count==0)
printf("0");
else if(count==1 && strlen(s)==1)
printf("%ld",n);
else
{
key=n/strlen(s);
remainder=n%strlen(s);
while(l!=remainder)
{
if(s[l]=='a')
count2++;
l++;
}
printf("%ld",(count*key+count2));
}
}
