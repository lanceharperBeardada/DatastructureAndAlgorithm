#include<stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	int count=1;
	double i=2,sum=2;
	while(sum<x)
	{
		count+=1;
		i*=0.98;
		sum=i+sum;
	}
	printf("%d",count);
 } 
