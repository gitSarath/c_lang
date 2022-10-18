#include<stdio.h>
void main()
{
	int i,s,length,n;
	char a[]={'s','a','r','a','t','h'};
	printf("\n the size of the aray is:");
		s=sizeof(a);
		printf("%d\n",s);
	for(i=0;i<n;i++)
		printf("%c",a[i]);
	printf("\n the length of your name is:");
        length=s/sizeof(char);
	printf("%d\n",length);
}	
