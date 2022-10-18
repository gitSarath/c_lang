#include<stdio.h>
void main()
{
int n,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
	if(n%2 != 0)
sum=sum+n;
n--;
}
printf("the sum is %d",sum);
}

