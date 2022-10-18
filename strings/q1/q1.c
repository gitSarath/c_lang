#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char s[100];
	printf("enter the string:");
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
		else
		{
			s[i]=s[i]+32;
		}
	}
	printf("case string:%s",s);
}

