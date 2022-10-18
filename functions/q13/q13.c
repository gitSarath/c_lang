#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n>0)
	{
		return n*fact(n-1);
	}
}
void main()
{
	float series=(1/(float)fact(1))+(2/(float)fact(2))+(3/(float)fact(3))+(4/(float)fact(4))+(5/(float)fact(5))+(6/(float)fact(6))+(7/(float)fact(7));
	printf("%f\n",series);
}
