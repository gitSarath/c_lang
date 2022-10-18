#include<stdio.h>
void main()
{
	int n,p,check;
	printf("\n enter a number:");
	scanf("%d",&n);
	printf("\nenter the position to check:");
	scanf("%d",&p);
	if (n&(1<<p))
	{
		printf("\nthe bit is set");

	}
	else
	{
		printf("\nthe bit is not set");
	}

}
