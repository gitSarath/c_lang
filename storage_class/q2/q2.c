#include<stdio.h>
void fun1();
void main()
{
	int a=2;
	{
		auto int a=10;
		printf("a in auto block =%d",a);
	}
	printf("\n a in main block=%d",a);
	fun1();
	fun1();
}
void fun1()
{
	static int a;
	a+=15;
	printf("\n a in static=%d",a);
}
