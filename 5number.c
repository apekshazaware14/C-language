#include<stdio.h>
int main()
{
	int m,n,o,p,q;
	printf("enter 5 numbers");
	scanf("%d%d%d%d%d",&m,&n,&o,&p,&q);
	if(m>n&&m>o&&m>p&&m>q)
	printf("%d number is greater",m);
	if(n>m&&n>o&&n>p&&n>q)
	printf("%d number is greater",n);
	if(o>m&&o>n&&o>p&&o>q)
	printf("%d number is greater",o);
	if(p>m&&p>n&&p>o&&p>q)
	printf("%d number is greater",p);
	else
	printf("%d number is greater",q);
}
