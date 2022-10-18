#include<stdio.h>
void main()
{
	int temp,i,j,n;
	printf("\n enter the limit");
	scanf("%d",&n);
	int a[n];
	printf("\n enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	  printf("sorted array:\n");
		for(i=0;i<n;i++)
		{
			 printf("%d ",a[i]);
	         }

	printf("\nthe latgest element is%d",a[0]);
	printf("\nthe second largest element is %d",a[1]);
	printf("\nthe smallest element is %d",a[n-1]);
	printf("\nthe second smallest element is %d",a[n-2]);
}

