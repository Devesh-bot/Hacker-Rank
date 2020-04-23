/* choclate   Feast c solution */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>
int main()
{
int test_case,n,c,m,i,number_of_choclate,number_of_wrappers;
scanf("%d",&test_case);
for(i=0;i<test_case;i++)
{
scanf("%d",&n);
scanf("%d %d",&c,&m);
number_of_choclate=number_of_wrappers=n/c;
if(number_of_wrappers<m)
printf("%d\n",number_of_choclate);
else if(number_of_wrappers>=m)
{
while(number_of_wrappers>=m)
{
number_of_choclate=number_of_choclate+number_of_wrappers/m;
number_of_wrappers=number_of_wrappers%m+number_of_wrappers/m;
}
printf("%d\n",number_of_choclate);
}
}
}
