#include<stdio.h>
void main()
{
	int sal,DA,RA,B;
	printf("enter salary");
	scanf("%d",&sal);
	DA=sal*10/100;
	RA=sal*20/100;
	B=sal*3/100;
	sal=sal+DA+RA+B;
	printf("salary=%d",sal);
}
