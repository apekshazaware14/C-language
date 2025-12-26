#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("enter third number");
	scanf("%d",&c);
	if(a<=c&&b>=c)
	printf("number is between first and second");
	else
	printf("number is not between first and second");
	
}
