#include<cstdio>
using namespace std;
void fun(int x)
{
	int p=1,q=0;
	printf("2");
	while(x>=p)
	{
		p*=2;
		q++;
	}
	q-=1;
	if(q==2||q==0)
		printf("(%d)",q);
	if(q>=3)
	{
		printf("(");
		fun(q);
		printf(")");
	}
	p/=2;
	x-=p;
	if(x>0)
	{
		printf("+");
		fun(x);
	}
}
int main()
{
	int x;
	scanf("%d",&x);
	fun(x);
	return 0;	
}
