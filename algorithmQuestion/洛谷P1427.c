#include<stdio.h>
#include<string.h>
int main()
{
	int a[100];
	memset(a,1,sizeof(a));
	int i;
	for(i=1;a[i-1]!=0;i++)
		scanf("%d",&a[i]);
	i-=1;
	while(i>1)
		printf("%d ",a[--i]);
	return 0;
	
 } 
