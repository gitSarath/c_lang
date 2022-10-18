#include<stdio.h>
void main()
{
int i,n,sum=0,temp,q,rem;
printf("enter a number");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
sum=(sum*10)+rem;
n=n/10;
}
if (temp==sum)
{
printf("the given no is palindrome");
}
else
{
printf("the no is not palindrome");
}
}


