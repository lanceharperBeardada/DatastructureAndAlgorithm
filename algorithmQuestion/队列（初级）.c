//∂”¡–£¨≥¢ ‘∞Ê
#include<stdio.h>
struct queue
{
	int a[100];
	int head;
	int tail;
};

int main()
{
	struct queue q;
	
	q.tail=0;
	q.head=0;
	for(;q.tail<5;q.tail++)
	{
		scanf("%d",&q.a[q.tail]);
	}
	for(;q.head<q.tail;q.head++)
	{
		printf("%d",q.a[q.head]);
		q.head++;
		q.a[q.tail++]=q.a[q.head];
	}
	return 0;
		
}

