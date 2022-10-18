#include<stdio.h>
int fun1(int);
int fun2(int,int);
void main()
{
	int f1,f2,n,r,final;
	printf("enter the value of n,r");
	scanf("%d%d",&n,&r);
	f1=fun1(n);
	f2=fun2(n,r);
	final=f1/f2;
	printf("%d",final);
}
int fun1(int n)
{
	int i,s=1;
	for(i=1;i<=n;i++)
		s=s*i;
	return s;
}
int fun2(int n, int r)
{
	int i,o=1;
	for(i=1;i<=n-r;i++)
	{
		o=o*i;
	}
	return o;
}
