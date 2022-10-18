#include<stdio.h>
#include<string.h>
char del(char str1[],char str2[]);
char del(char str1[],char str2[])
{
	int i,j;
	int n=strlen(str1);
	int m=strlen(str2);
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;j++)
			if(str1[i]==str2[j])
			{
				str1[i]=str2[i+1];
				for(int k=i+1;k<n;++k)
					str1[k]=str1[k+1];
			}
	}
}
void main()
{
	char str1[]="rain";
	char str2[]="more";
	del(str1,str2);
	puts(str1);
	puts(str2);
}
