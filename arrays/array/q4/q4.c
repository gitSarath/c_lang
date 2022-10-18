#include<stdio.h>
void main()
{
	int a[5],b[5],i,n;
	printf("enter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	b[i]=a[n-1-i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}

