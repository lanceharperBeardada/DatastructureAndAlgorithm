#include<iostream>
using namespace std;
int a[105][105];
int main()
{
	int n,k,m,count=0,x,y;
	cin>>n>>k>>m;
	for(int b=1;b<=k;b++)
	{
		cin>>x>>y;
		for(int i=x-1;i<=x+1;i++)
			for(int j=y-1;j<=y+1;j++)
			{
				a[i][j]=1;
			}
		a[x-2][y]=1,a[x][y-2]=1,a[x+2][y]=1,a[x][y+2]=1;
	}
	for(int b=1;b<=m;b++)
	{
		cin>>x>>y;
		for(int i=x-2;i<=x+2;i++)
			for(int j=y-2;j<=y+2;j++)
			{
				a[i][j]=1;
			}	
	}
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]==0)
				count++;
	cout<<count<<endl;
	return 0;	
 } 
