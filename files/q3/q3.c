#include<stdio.h>
void main()
{
	char ch[20];
	FILE *fp;
	fp=fopen("targ.txt","r");
	if(fp==NULL)
	{
		printf("error");
	}
	while(fgets(ch,20,fp)!=NULL)
	{
		fputs(ch,stdout);
	}
	fclose(fp);
}
