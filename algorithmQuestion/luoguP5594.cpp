#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[1001][1001];
int main()
{
	int k,j,m;
	scanf("%d%d%d",&k,&j,&m);
	for(int c=0;c<k;c++)
		for(int b=1;b<=j;b++)
		{
			int d;
			scanf("%d",&d);
			a[d][b]=1;		
		}
	
	for(int c=1;c<=m;c++)
	{
		int sum=0;
		for(int d=1;d<=j;d++)
			sum+=a[c][d];
		printf("%d ",sum);		
	}
	return 0;
 } 
