#include<stdio.h>
void main()
{
	int a[10],n,i,num,x;
	printf("\n enter the number of elements:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("\n enter the position to inserted:");
		scanf("%d",&n);
		printf("\n enter the number to be inserted:");
		scanf("%d",&x);
		for(i=num-1;i>=n-1;i--)
		{
			a[i+1]=a[i];
		}
		a[n-1]=x;
		for(i=0;i<=num;i++)
		{
			printf("%d\n",a[i]);
		}
	
}
