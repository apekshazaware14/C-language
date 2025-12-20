#include<stdio.h>
int main()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	if(a%5==0&&a%7==0)
	{
		if(a%2==0)
		   {
		   	printf("number is even");
		   	printf("\ncube of that number=%d",a*a*a);
		   }
		else
		   {
		   	printf("number is odd");
		   	printf("\nsquare of that number=%d",a*a);
		   }   
	}
	else
	  {
	  	printf("number is not divisible by 5 and 7");
	  }
	      
}
