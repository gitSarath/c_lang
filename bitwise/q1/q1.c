#include<stdio.h>
int fun(int);
void main()
{
	int n,res;
	printf("enter the number");
	scanf("%d",&n);
	res=fun(n);
	printf("%d",res);
}
int fun(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
	return((n&1)+fun(n>>1));
	}
}
