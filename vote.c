#include <stdio.h>
int main()
{
	int a;
	printf("enter age");
	scanf("%d",&a);
	if(a>=18)
	   printf("voter is eligible for vote");
	else 
	   printf("voter is not eligible for vote");   
}
