#include<stdio.h>
void main()
{
	float v,a,r,h;
	printf("enter radious");
	scanf("%f",&r);
	printf("enter height ");
	scanf("%f",&h);
	a=2*3.14*r*(r+h);
	v=3.14*r*r*h;
	printf("\narea of cylinder=%f",a);
	printf("\nvolume of cylinder=%f",v);
}
