#include<stdio.h>
#include<string.h>
int main()
{
	int a,i,count=0;
	char b[100];
	scanf("%s",b);
	a=strlen(b);
	for(i=0;i<a-1;i++)
	{
		if(b[i]!=b[i+1])
		{
			for(int m=0;m<i+1;m++)
				b[m]=b[i+1];
				count++;
		}
	}
	if(b[i]=='0')
	count+=1;
	printf("%d",count);
	

}
