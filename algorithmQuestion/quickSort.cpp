#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int Partition(int a[],int low,int high);
void quickSort(int a[],int low,int high);
int main()
{
	int a[100];
	int n;
	cout<<"请输入待排元素个数：";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0; 
}
void quickSort(int a[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		int pivot=Partition(a,low,high);
		quickSort(a,low,pivot-1);
		quickSort(a,pivot+1,high);
	}
}
int Partition(int a[],int low,int high)
{
	int x,i;
	x=a[high];
	i=low-1;
	for(int j=low;j<high;j++)
	{
		if(a[j]<=x)
		{
			i++;
			swap(a[i],a[j]);//交换两个数 
		}	
	}
	swap(a[i+1],a[high]); 
	return i+1;
}

