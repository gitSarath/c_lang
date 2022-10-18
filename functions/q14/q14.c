#include<stdio.h>
int fact(int);
int gcd(int,int);
void main()
{
	int res1,res2,n,a,b;
	printf("\nenter the number to find facorial:");
	scanf("%d",&n);
	printf("\nenter the numbers to find the gcd:");
	scanf("%d%d",&a,&b);
	res1=fact(n);
	printf("\nthe factorial value is %d",res1);
	res2=gcd(a,b);
	printf("\nthe gcd value is %d",res2);
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int gcd(int a,int b)
{
	if (b!=0)
	{
		return gcd(b,a%b);
	}
	else
	{
		return a;
	}
	
}

