#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int v=a[i];
		int j=i-1;
		while(j>=0 && a[j]>v)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=v;
	 } 
}
int main()
{
	int a[100];
	int n;
	cout<<"�������Ԫ�ظ�����";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	insertionSort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0; 
}
