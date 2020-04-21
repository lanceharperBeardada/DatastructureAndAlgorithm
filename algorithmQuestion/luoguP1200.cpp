#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char a[28]="0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[7];
	scanf("%s",b);
	char c[7];
	scanf("%s",c);
	int cot=1;
	int cot2=1;
	for(int i=0;i<strlen(b);i++)
	{
		for(int j=1;j<27;j++)
		if(b[i]==a[j])
		{
			cot*=j;
		//	printf("J:%d\t\n",j);
		}	
	}
	for(int i=0;i<strlen(c);i++)
	{
		for(int j=1;j<27;j++)
			if(c[i]==a[j])
			{
				cot2*=j;
				//printf("%d",j); 
			}
	}
//	printf("%d\n%d\n",cot,cot%47);
//	printf("%d\n%d\n",cot2,cot2%47);
	
	if(cot%47==cot2%47)
		printf("GO");
	else
		printf("STAY");
	return 0;
 } 
