#include<stdio.h>
#include<string.h>
int main()
{
	char a[100000];
	memset(a,0,sizeof(a));
	scanf("%s",a);
	int n=strlen(a);
	if(n==1&&a[0]=='0')
	{
		printf("0");
		return 0;
	}

	int i;
	i=n-1;
	
	if(a[0]=='-')
	{
		printf("-");
		if(a[n-1]=='0')
		{
			while(a[i]=='0')
				i--;	
			for(;a[i]!='-';i--)
			printf("%d",a[i]-'0');
		}
		else
		{
			for(;i>0;i--)
			printf("%d",a[i]-'0');
		}
	}
	else
	{
		if(a[n-1]=='0')
		{
			while(a[i]=='0')
				i--;	
			for(;i>=0;i--)
			printf("%d",a[i]-'0');
		}
		else
		{
			for(;i>=0;i--)
			printf("%d",a[i]-'0');
		}
	}
}
