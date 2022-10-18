#include<stdio.h>
void main()
{
int a[10][10],b[10][10],sum[10][10],dif[10][10],mul[10][10],i,j,r1,c1,r2,c2;
printf("enter the fist matrix rows and columns");
scanf("%d %d",&r1,&c1);
printf("enter the elements of first matrix");
	for(i=0;i<=r1;i++)
	{
	for(j=0;j<=c1;j++)
	{
	scanf("%d",&a[i][j]);
}
}
printf("enter the second  matrix rows and columns ");
scanf("%d %d",&r2,&c2);
printf("enter the second matrix");
	for(i=0;i<=r2;i++)
	{
	for(j=0;j<=c2;j++)
	{
	scanf("%d",&b[i][j]);
	}
}
if(r1==r2||c1==c2)
{
sum[i][j]=a[i][j]+b[i][j];
printf("the matrix addition is:");
	for(i=0;i<=r1;i++)
	{
	for(j=0;j<=c1;j++)
	{
	printf("%d",sum[i][j]);
}
}
}
}
