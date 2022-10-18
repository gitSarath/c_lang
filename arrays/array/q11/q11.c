#include<stdio.h>
void main()
{
	int a[10],b[10],c[20],i,k,n=10;
	printf("\n enter the first array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the second array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<10;i++)
	{
		c[n++]=b[i];
	}
	for(i=0;i<n;i++)
	{
	printf("%d ",c[i]);
	}
}

