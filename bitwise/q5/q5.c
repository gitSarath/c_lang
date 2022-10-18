#include<stdio.h>
void main()
{
	int num,p,clear;
	printf("\nenter a number:");
	scanf("%d",&num);
	printf("\nenter the position:");
	scanf("%d",&p);
	clear=num&(~(1<<p));
	printf("\nafter clearing is: %d",clear);
}
