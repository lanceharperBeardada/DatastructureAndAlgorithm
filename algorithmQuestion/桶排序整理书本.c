//桶排序，根据书的编号对书本进行整理，针对编号较短的书本进行整理 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100000
int main()
{
	int a[MAX];//定义一个数组，下标表示书的编码
	int i=0;
	/*while(i!=100)
	{
		a[i]=0;
		i+=1;
	}*/
	memset(a,0,sizeof(a));
	int b;//表示要输入的书本数目
	printf("请输入书本的数目："); 
	scanf("%d",&b);
	i=0;
	int iso;//书本编码 
	while(i!=b)	
	{
		scanf("%d",&iso);
		a[iso]+=1;
		i+=1;
	}
	iso=0;
	while(iso<MAX)
	{
		if(a[iso]!=0)
			printf("编号为%d的书有%d本\n",iso,a[iso]);
		iso+=1;
	}
	return 0;
}   
