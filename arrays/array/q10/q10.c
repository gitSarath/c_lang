#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],d[10],i,n,j=0,k=0;
	printf("enter the limit\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			c[j]=a[i];
			j++;
		}
		else
		{
			d[k]=a[i];
			k++;
		}
	}
		for(i=0;i<j;i++)
		{
			printf("%d\n",c[i]);
		}
		for(i=0;i<k;i++)
		{
			printf("%d\n",d[i]);
		}
}
