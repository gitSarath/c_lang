#include<stdio.h>
struct time
{
	int hrs,sec,min;

}t;
void main()
{
	struct time t;
	printf("the hours: ");
	scanf("%d",&t.hrs);
	printf("the minutes:");
	scanf("%d",&t.min);
	printf("the seconds:");
	scanf("%d",&t.sec);
	printf("the time is %d:%d:%d",t.hrs,t.min,t.sec);
}

