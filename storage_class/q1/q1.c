#include<stdio.h>
void fun1();
void fun2();
void main()
{
	int b;
	static int a=10;
	printf("\nenter two numbers:");
	scanf("%d%d",&a,&b);
	printf("%d\n",a);
	fun1(a);
	fun1(a);
	//fun2(a);
}
void fun1( int d)
{
	d=15;
	printf("%d\n",d);
	}
void fun2(int c)
{
	c=20;
	printf("%d",c);
}
