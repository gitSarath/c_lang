#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void toLower(char *s)
{
	for(int i=0;i<=strlen(s);i++)
	{
		if(s[i]>=65 && s[i]<=122)
		{
			s[i]+=32;
		}
		else if(s[i]>=97 && s[i]<=122)
		{
			s[i]-=32;
		}
	}
	printf("\n after conversion string ='%s'\n",s);
}
void main()
{
	char s[50];
	printf("\nenter the uppercase string:");
	scanf("%s",s);
	printf("before conversion string='%s'",s);
	toLower(s);
}
