#include<stdio.h>
void endian(char*,int);
void main()
{
	int num=0x12345678;
	endian((char*)&num,sizeof(num));
}
void endian(char *num,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%x",num[i]);
	}
	printf("\n");
}
