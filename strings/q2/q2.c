#include<stdio.h>
#include<string.h>
void rev();
void rev()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		rev();
		printf("%c",c);
	}
}
void main()
{
	printf("enter the character:");
	rev();
	printf("\n");
}
