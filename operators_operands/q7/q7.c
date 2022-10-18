#include<stdio.h>
void main()
{
	int d1,d2,m1,m2,y1,y2;
	unsigned int days=0;
	printf("\n enter the date, month, year");
	scanf("%d %d %d" ,&d1,&m1,&y1);
	printf("\n enter the date2, month2, year2");
	scanf("%d %d %d ", &d2,&m2,&y2);
	days=365*1+(1/4)-(1/100)+(1/400)+0+((153*6)+8)/5;
	printf("%u\n",days);
}
