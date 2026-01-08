#include<stdio.h>
int main()
{
	int ten,five,one,amt;
	printf("enter amount");
	scanf("%d",&amt);
	ten=amt/10;
	amt=amt%10;
	five=amt/5;
	amt=amt/5;
	one=amt;
	printf("number of 10 notes=%d",ten);
	printf("\n number of 5 notes=%d",five);
	printf("\n number of 1 notes=%d",one);
	
}
