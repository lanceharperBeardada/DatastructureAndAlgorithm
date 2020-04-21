  #include<stdio.h>
	#define MAX 1000000
	int a[MAX],num;
	void quick(int left,int right)
	{
		int temp;//基准数，以基准数为中心，向两边进行排序 
		int t,i=left,j=right;
		temp=a[i];//以最左边的数为基准数 
	
		/*当i大于j时，返回终止该函数（迭代）*/ 
		if(i>j)
			return ;
	
		while(i!=j)
		{
			while (a[j]>=temp&&i<j)//注意a[j]等于temp的情况 
				j--;
			while (a[i]<=temp&&i<j)
				i++;
	
			//当a[j]<temp并且a[i]>temp,交换a[i]与a[j]的值 
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		a[left]=a[i];
		a[i]=temp;
	
		quick(left,i-1);//要么用i要么用j，不能i、j混用 
		quick(i+1,right);	
	} 
	int main(void)
	{
		scanf("%d",&num);
		int n;
		for(n=0;n<num;n++)
		{
			scanf("%d",&a[n]);
		}
		quick(0,num-1);
		for(n=0;n<num;n++) 
			printf("%d",a[n]);
		return 0;
	} 
