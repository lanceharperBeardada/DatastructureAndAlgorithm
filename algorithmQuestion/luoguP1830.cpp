#include<stdio.h>
int main()
{
	int n,r;
	scanf("%d",&n);
	int nu,qo=0;
	int count=0;
	nu=n*n;
    while(nu)
    {
        scanf("%d",&r);
        nu-=r;
        for(int i=0;i<r;i++)
        {
            printf("%d",qo);
            count++;
            if(count==n)
            {
                count=0;
                putchar('\n');
            }
        }
        qo=!qo;
    }
		
	return 0;
}
