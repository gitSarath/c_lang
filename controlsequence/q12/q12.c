#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter a number limit:\n");
	scanf("%d",&n);
for(i=1;i<=n;i++)
{ int count=0;
	for(j=i;j>0;j--)
	{
		if(i%j==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d",i);
	}
	}
}

