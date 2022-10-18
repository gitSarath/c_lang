#include<stdio.h>
void index(int [],int,int);
void main()
{
	int i,s[40],sz,t;
	printf("\n enter the size of array:");
	scanf("%d",&sz);
	printf("enter the elements of array:");
	for(i=0;i<sz;i++)
	{
		scanf("%d",&sz);
	}
	printf("\n enter the num those rightmost occurance you want to find:");
	scanf("%d",&t);
index(s,sz,t);
}
void index(int s[],int size,int t)
{
	int i,j=1;
	for(i=size-1,j=1;i>=0;--i)
	{
		if (s[i]==t)
		{
			printf("\n %d rightmost occurance is:%d\n",t,j);
			break;
		}
		j++;
	}
}


