/*
10 10 2 3
1 1 5 5
5 5 10 10
3 2
5 5
7 1
*/
#include<stdio.h>
int main()
{
	//第一行输入城市大小,轰炸次数，测试点个数 
	int cityx,cityy,hn,cn;
	int h1x[100],h1y[100],h2x[100],h2y[100],cx[100],cy[100],count[100];
	int sum[100];
	scanf("%d%d%d%d",&cityx,&cityy,&hn,&cn);
	for(int i=0;i<hn;i++)
		scanf("%d%d%d%d",&h1x[i],&h1y[i],&h2x[i],&h2y[i]);
	for(int i=0;i<cn;i++)
	{	
		scanf("%d%d",&cx[i],&cy[i]);
		for(int j=0;j<hn;j++)
		{
			sum[i]=0;
			if(cx[i]>h1x[j]&&cx[i]<h2x[j]&&cy[i]>h1y[j]&&h2y[j]>cy[i])
			{
				count[i]++;
				sum[i]=j+1;
			}
		}
	}
	for(int i=0;i<cn;i++)
	{
		if(count[i]!=0)
			printf("Y %d %d\n",count[i],sum[i]);
		else
			printf("N");
	}
	return 0; 
} 
