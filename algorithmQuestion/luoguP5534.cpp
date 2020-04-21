#include<stdio.h>
int main()
{
    int k,m,n;
    scanf("%d%d%d",&k,&m,&n);
    int count=0;
    for(int i=1;i<=m;i++)
    {
        int ki,ni;
        scanf("%d%d",&ki,&ni);
        int a=k/ki;
        if(a*ni>=k)
        {
            printf("%d ",i);
            count+=1;
        }
    }
    if(count==0)
    return 0;
}
