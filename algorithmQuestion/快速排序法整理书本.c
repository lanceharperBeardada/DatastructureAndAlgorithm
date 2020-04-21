//快速排序法整理书籍，针对书的编码很长，且书的编码不为零的情况。 
#include<stdio.h>
#include<string.h> 
int a[100];//下标表示书本最大数量 
void quick(int left , int right)
{
	int i,j,temp;
	if(left>right)		
		return;
		
	temp=a[left];
	i=left;
	j=right;

	while(i!=j)
	{
		while(a[j]>=temp&&i<j)
			j-=1;		
		while(a[i]<=temp&&i<j)
			i+=1;
		int t;
		if(i<j)
		{
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
	}
	a[left]=a[i];
	a[i]=temp;
	
	quick(left,i-1);
	quick(i+1,right);
} 
int main()
{
	int n; 
	puts("请输入书本的数目：");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]); 
	quick(0,i-1);
	
	int b[100];
	memset(b,0,sizeof(b));
	int m;
	m=i=1;
	b[0]=a[0];
	while(i<=n)
	{
		if(a[i]==a[i-1])
			i++;
		else
			{
				b[m]=a[i];
				m+=1;
				i++;
			}
	}
	for(i=0,m=0;i<n;i++)
	{
		if(b[i]!=0)
		{
			printf("书的编号为%d\n",b[i]);
			m++; 
		}	
	}
	printf("一共有%d种不同的书。",m); 
}
