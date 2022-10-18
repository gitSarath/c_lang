#include<stdio.h>
void main()
{
	float table[2][3]={{1.1,1.2,1.3},{2.1,2.2,2.3}};
	printf("%p\n 1st case:",(table+1));
	printf("%p\n 2nd case:",*(table+1));
	printf("%p\n 3rd case:",(*(table+1)+1));
	printf("%p\n 4th case:",(*(table)+1));
	printf("%f\n 5th case:",*(*(table+1)+1));
	printf("%f\n 6th case:",*(*(table)+1));
	printf("%f\n 7th case:",*(*table+1));
	printf("%f\n 8th case:",*(*(table)+1)+1);
}
