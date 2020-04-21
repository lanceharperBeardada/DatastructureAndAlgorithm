#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
void selectionSort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int minj=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[minj])
				minj=j;
		}
		swap(a[i],a[minj]);
	}
}
int main()
{
	int n;
	int a[20];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	selectionSort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
