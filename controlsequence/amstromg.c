#include<stdio.h>
void main()
{
int n,temp,val=0,rem;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
val=val+(rem*rem*rem);
n=n/10;
}
if(temp==val)
printf("the number is amstrong");
else
printf("the number is not amstrong");
}

