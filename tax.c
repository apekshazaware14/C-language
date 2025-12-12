#include<stdio.h>
void main()
{
	int sal;
	float tax;
	printf("enter salary");
	scanf("%d",&sal);
	if(sal<=150000)
	tax=0;
	else if(sal>150000&&sal<300000)
	tax=20;
	else if(sal>=300000)
	tax=30;
	printf("salary=%d",sal);
	printf("\ntax=%f",tax);
		
}
