#include<iostream>
#include<cstdio>
#include<vector> 
using namespace std;
vector<int>g;
long long cnt;
void insertionSort(int a[],int n,int g)
{
	for(int i=g;i<n;i++)
	{
		int v=a[i];
		int j=i-g;
		while(j>=0 && a[j]>v)
		{
			a[j+g]=a[j];
			j=j-g;
			cnt++;
		}
		a[j+g]=v;
	}
}
void shellSort(int a[],int n)
{
	for(int h=1;;)
	{
		if(h>n)
			break;
		g.push_back(h);
		h=h*3+1;
	}
	
	//shell数组里的元素 
	for(int i=0;i<g.size();i++)
		cout<<g[i]<<" "; 
	cout<<endl;
	
	for(int i=g.size()-1;i>=0;i--)
	{
		insertionSort(a,n,g[i]);
	}
}
int main()
{
	int n;int a[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cnt=0;
	shellSort(a,n);
	cout<<g.size()<<endl;//shell数组的长度 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
