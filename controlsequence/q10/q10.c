#include<stdio.h>
void main()
{
	int n,temp=1,k,j,i;
	printf("enter the n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("   ");
				for(k=0;k<i;k++)
				{
					printf ("%d  ",temp);
					temp=temp * (i-k)/(k+1);
				}
				printf("\n");
		}
	}
}
