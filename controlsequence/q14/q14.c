#include<stdio.h>
int gcd(int,int);
void main()
{
	int a,b,res;
	printf("\nenter two numbers to find gcd:");
	scanf("%d%d",&a,&b);
	res=gcd(a,b);
	printf("\nthe result of gcd is: %d",res);
	if(res==1)
	{
		printf("\nthe numbers are coprime");
	}
	else
	{
		printf("\nthe numbers are not coprime");
	}
}
int gcd(int a,int b)
{
	if(b!=0)
	{
		return gcd(b,a%b);
	}
	else
	{
		return a;
	}
}
