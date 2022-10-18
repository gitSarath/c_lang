#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char str[10];
	char *ptr[5];
	for(int i=0;i<5;i++)
	{
		printf("\n enter the element");
		scanf("%s",str);
		int n=sizeof(str);
		ptr[i]=(char*)malloc(sizeof(char)*n+1);
		strcpy(ptr[i],str);
	}
	for(int i=0;i<5;i++)
	{
		printf("\n%s",ptr[i]);
	}
}
