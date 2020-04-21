#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,i;
	int a[20001];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	for(i=n-1;m>0;i--)
		m-=a[i];
	printf("%d",n-(i+1));
	return 0;
 } 
