#include<stdio.h>
void main()
{
	int i,j,n,num,count=0;
	printf("enter limit:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter array element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		num=a[i];
		for(j=2;j<num;j++)
		{
			if(num%j==0)
			break;
		}
		if(j==num)
		count++;
	}
	printf("count of prime numbers=%d",count);
}
