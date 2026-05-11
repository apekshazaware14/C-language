#include<stdio.h>
void main()
{
	int a[50][50],b[50][50],c[50][50];
	int i,j,k,row,col;
	printf("enter row:");
	scanf("%d",&row);
	printf("enter column:");
	scanf("%d",&col);
	printf("enter  first matrix element:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter  second matrix element:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("addition of two matrix:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
    }
}

