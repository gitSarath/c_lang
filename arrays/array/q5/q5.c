#include<stdio.h>
void main()
{
	int a[10],i,sum=0,avg=0,n;
	printf("enter the limit\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
{
	sum=sum+a[i];
}
avg=sum/n;
printf("the sum is %d\n",sum);
printf(" the average is  %d\n",avg);
}

