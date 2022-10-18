#include<stdio.h>
void main()
{
int n,i,s=1;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s*i;
}
printf("the factorial is: %d",s);
}

