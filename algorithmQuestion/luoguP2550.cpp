#include<stdio.h>
#include<string.h>
int c[9]={0};
fun(char d[],int len)
{
	for(int i=0;i<len;i++)
	c[i]=d[i]-'0';
}
int main()
{
	int xiaoa=0;
	int uim=0;
	int a[9];
	int b[9];
	char d[10];
	int sum1[10]={0};
	int sum2[10]={0};
	int count=0;
	scanf("%s",d);
	count=strlen(d);
	//printf("%d\n",count);
	fun(d,count);
	for(int i=0,j=1,k=0;k<count;k+=2)
	{
		a[i]=c[k];
		sum1[a[i]]=1;
		//printf("%d\n",a[i]);
		i+=2;
		if(k+1<count)
		{
			b[j]=c[k+1];
			//printf("%d\n",b[j]);
			sum2[b[j]]=1;
			j+=2;
		}
	}
	if(sum1[1]==1&&sum1[5]==1&&sum1[9]==1)
		xiaoa=1;
	if(sum1[4]==1&&sum1[1]==1&&sum1[7]==1)
		xiaoa=1;
	if(sum1[1]==1&&sum1[2]==1&&sum1[3]==1)
		xiaoa=1;
	if(sum1[2]==1&&sum1[5]==1&&sum1[8]==1)
		xiaoa=1;
	if(sum1[3]==1&&sum1[6]==1&&sum1[9]==1)
		xiaoa=1;
	if(sum1[3]==1&&sum1[5]==1&&sum1[7]==1)
		xiaoa=1;
	if(xiaoa==1)
	{
		printf("xiaoa wins");
		return 0;
	}
	if(sum2[1]==1&&sum2[5]==1&&sum2[9]==1)
		uim=1;
	if(sum2[4]==1&&sum2[1]==1&&sum2[7]==1)
		uim=1;
	if(sum2[1]==1&&sum2[2]==1&&sum2[3]==1)
		uim=1;
	if(sum2[2]==1&&sum2[5]==1&&sum2[8]==1)
		uim=1;
	if(sum2[3]==1&&sum2[6]==1&&sum2[9]==1)
		uim=1;
	if(sum2[3]==1&&sum2[5]==1&&sum2[7]==1)
		uim=1;
	if(uim==1)
		printf("uim wins");
	if(uim==0&&xiaoa==0)
		printf("drew");
	 
 } 
