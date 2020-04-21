#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[10001];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=1;
	int cnt=0;
	while(i<n)
	{
		while(a[i-1]>=a[i]&&i<n)i++;
		while(a[i-1]<=a[i]&&i<n)i++;
		cnt++;
	 }
	 cout<<cnt-2<<endl;
	 return 0;
 } 
