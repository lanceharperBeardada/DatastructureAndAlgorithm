#include<cstdio>
using namespace std;
int main()
{
	long double x;
	scanf("%20Lf",&x);
	x=x/(0.23*100);
	printf("%.8Lf",x);
	return 0;
}
