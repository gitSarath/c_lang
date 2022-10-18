#include<stdio.h>
void swap(int *,int *);
void main()
{
	int a,b;
	printf("\n enter two numbers to swap:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);

}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n the swapped output is %d %d ",*a,*b);
}
