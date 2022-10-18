#include<stdio.h>
int fact(int);
void main()
{
	int n,r,ncr,npr;
	printf("\n enter the values of n and r:");
	scanf("%d %d",&n,&r);
	npr=fact(n)/fact(n-r);
	ncr=npr/fact(r);
	printf("\n %d",npr);
	printf("\n %d",ncr);
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
		return n*fact(n-1);
}
