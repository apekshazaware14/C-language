#include<stdio.h>
int main()
{
	int num,d,sum=0,num1;
	printf("enter number");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	    {
	    	d=num%10;
	    	sum=sum+d*d*d;
	    	num=num/10;
		}
		 if(sum==num1)
		 printf("number is armstrong ");
		 else
		 printf("number is not armstrong");
}
