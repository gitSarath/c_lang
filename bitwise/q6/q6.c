#include<stdio.h>
void main()
{
	int num,p,toggle;
	printf("\nenter the number:");
       scanf("%d",&num);
       printf("\nenter the position:");
       scanf("%d",&p);
       toggle=(1<<p)^num;
       printf("%d\n",toggle);
}
