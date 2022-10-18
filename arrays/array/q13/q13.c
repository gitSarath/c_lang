#include<stdio.h>
void main()
{
	int a[10],i,j,n;
	printf("enter the limit");
	scanf("%d",&n);
	printf("\n enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int count =0;
	for(j=i+1;j<n;j++)
			{
				if (a[i]==a[j])
				{
					count++;
				}
			}
	
	
		if(count>=1)
		{
			printf("\n the value %d is repeating and %d times",a[i],count+1);
		}
	}
	
	
}
