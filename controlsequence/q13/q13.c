#include<stdio.h>
void main()
{
int n,s=0,rem;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
s=rem+s;
n=n/10;
}
printf("the sum of digits is %d",s);
}

