#include<stdio.h>
int main()
{
	int a,b,sum=0,i;
	printf("enter number");
	scanf("%d",&a);
	printf("enter number");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	    {
	    	sum=sum+i;
		}
		  printf("sum of numbers between range=%d",sum);
}
