#include<iostream>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int cnt=0;
	int a[1000];
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
	}
	int sum=0;
	for(;sum<n;){
		cnt++;
		sum+=m;
		for(int j=0;j<k;j++)
			if(sum==a[j])
				m++;
	}
	cout<<cnt;
	return 0;
}
