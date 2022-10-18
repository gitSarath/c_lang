#include<stdio.h>
void main()
{
float p,t,r;
float i;
printf("enter the principle amount\n");
scanf("%f",&p);
printf("enter the time period\n");
scanf("%f",&t);
printf("enter the interest rate\n");
scanf("%f",&r);
i=(p*t*r)/100;
printf("the interest amount is %.2f\n",i);
}



