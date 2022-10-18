#include<stdio.h>
void main()
{
	int num,p,set;
	printf("\nenter a number: ");
	scanf("%d",&num);
	printf("\nenter the position to set the bit: ");
	scanf("%d",&p);
	set=((0<<p)&num);
	printf("\nthe number after setting is: %d\n",set);	
}
