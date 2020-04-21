#include<stdio.h>
#include<string.h>
int main(void)
{
	int a[11],num,num_peo,i;
	scanf("%d",&num_peo);
	memset(a,0,sizeof(a));
	//printf("%d",sizeof(a)); 
	for(i=0;i<num_peo;i++)
	{
		scanf("%d",&num);
		a[num]++;
	}
	for(;i>=0;i--)
		{
			for(;a[i]>0;a[i]--)
			printf("%2d",i);
		}
	return 0;
	
 } 
