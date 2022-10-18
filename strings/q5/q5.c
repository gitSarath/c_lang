#include<stdio.h>
#include<string.h>
void indx(char*s,char*a);
void main()
{
	char s1[10];
	char s2[10];
	printf("enter the string1:");
	scanf("%s",s1);
	printf("enter the string2:");
	scanf("%s",s2);
	indx(s1,s2);
}
void indx(char *s,char *a)
{
	for(int i=0;i<strlen(s);i++)
	{
		for(int j=0;j<strlen(a);j++)
		{
			if(s[i]==a[j])
			{
				printf("\n position of index:%d",i);
			}
		}
	}
}
