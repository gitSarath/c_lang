#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i%5==0)
{
continue;
}
sum=sum+i;
}
printf("%d",sum);
}

