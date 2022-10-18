#include<stdio.h>
void main()
{
char ch;
printf("enter your character");
scanf("%c",&ch);
switch(ch)
{
	case'a':
		printf("Apple");
		break;
	case 'b':
		printf("Bat");
		break;
	case 'c':
		printf("Cat");
		break;
	case 'd':
		printf("Dog");
		break;
	case 'f':
		printf("Fan");
	case 'A':
		printf("Apple");
		break;
	case 'B':
		printf("Bat");
		break;
	case 'C':
		printf("Cat");
		break;
	case 'D':
		printf("Dog");
		break;
	case 'F':
		printf("Fan");
		break;
	default:
		printf("enter the proper character");
		break;
}
}
	  
