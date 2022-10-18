#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],i,n;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[n-1-i];
	}
	printf("the original array is:");
	for(i=0;i<n;i++)
	{
		printf(" %d\t",b[i]);
	}
	printf("the reverse order is:");
	for(i=0;i<n;i++)
	{
	printf(" %d\t",c[i]);
	}
}
