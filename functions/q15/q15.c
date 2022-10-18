#include<stdio.h>
void calculator(int,int);
void mul(int,int);
void div(int,int);
void sqr(int);
int fact(int);
int menu();
void main()
{
	int a,b,val,menu;
	printf("\nenter two numbers:");
	scanf("%d %d",&a,&b);
	printf("your menu options are 1.multiplication 2.division 3.square 4.factorial");
	printf("enter your menu option");
	scanf("%d",&menu);
switch (menu)
{
	case 1:	mul(a,b);
		break;
	case 2:	div(a,b);
		break;
	case 3:	sqr(a);
		break;
	case 4: fact(a);
		break;
	deafault:printf("\n wrong operation");
}

}
void mul(int a,int b)
{
	int m;
	m=a*b;
	printf("\n multiplication is:%d",m);
}
void div(int a,int b)
{
	float d;
	d=a/b;
	printf("\n division is:%f",d);
}
void sqr(int a)	
{
	int s;
	s=a*a;
	printf("\n square is:%d",s);
}
int fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
		//printf("%d",a*fact(a-1));
	}

}

