#include<cstdio>
#include<iostream>
using namespace std;
void search(int a,int b)
{
	printf("%d %d",b,a);
}
int main()
{
	int a1,a2;
	int b1,b2;
	scanf("%d/%d",&a1,&a2);
	scanf("%d/%d",&b1,&b2);
	int c1,c2,c3;
	c1=a1*b1;
	c2=a2*b2;
	
	if(c1%c2==0)
	{
		c3=c1/c2;
		search(c3,1);
	}
	else if(c2%c1==0)
	{
		c3=c2/c1;
		search(1,c3);
	}
	else if(c1>c2){
		for(int i=c2-1;i>0;i--)
		{
			if(c1%i==0&&c2%i==0)
			{
				c1/=i;
				c2/=i;
			}
		}
		search(c1,c2);
	}
	else if(c2>c1)
	{
		for(int i=c1-1;i>0;i--)
		{
			if(c1%i==0&&c2%i==0)
			{
				c1/=i;
				c2/=i;
			}
		}
		search(c1,c2);
	}
	return 0;
}
