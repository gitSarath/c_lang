#include<stdio.h>
#include<string.h>
void main()
{
	int n;
	char a[5][10];
	printf("\nenter the no of string:");
	scanf("%d",&n);
	printf("\n enter the strings:");
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		
	}
	char temp[10];
	for(int i=0;i<n;i++)
	{
		for(int k=i+1;k<n;k++)
		{
			if(strcmp(a[i],a[k])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[k]);
				strcpy(a[k],temp);
			}
		}
	}
	printf("the sorted array is:");
	for(int i=0;i<n;i++)
	{
		printf(" %s",a[i]);
	}
	}
			
