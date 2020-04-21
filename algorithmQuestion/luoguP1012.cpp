#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a[20];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[j]+a[i]>a[i]+a[j])
			{
				string temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp; 
			}
			
		 } 
	}
	for(int i=0;i<n;i++)
		cout<<a[i];
	return 0;
}
