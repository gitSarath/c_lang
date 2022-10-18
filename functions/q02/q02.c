#include<stdio.h>
int fact(int n);
void main()
{
	int n;
	printf("enter factorial no:");
	scanf("%d",&n);
	printf("%d",fact(n));
}
int fact(int n)
{
	if(n==1)
	
		return 1;
	else
		return n*fact(n-1);
}
