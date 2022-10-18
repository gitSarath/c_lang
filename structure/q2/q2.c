#include<stdio.h>
struct student
{
	int rollno;
	float marks;
	char name;
}s;

union student1
{
	int rollno;
	float marks;
	char name;
}u;
void main()
{
	int str,uni;
	struct s;
	union u;
	str=sizeof(s);
	uni=sizeof(u);
	printf("\nthe size of structure is: %d",str);
	printf("\nthe size of union is: %d",uni);
}
