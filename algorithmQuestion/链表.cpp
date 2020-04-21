#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list *next;
} Node;
int main()
{
	int n;
	Node *head,*p,*q;
	head=NULL; 
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		p=(Node *)malloc(sizeof(Node));
		scanf("%d",&p->data);
		p->next=NULL;
		if(head==NULL)
			head=p;
		else
			q->next=p;
		q=p;
	}
	Node *t;
	t=head;
	int a;
	scanf("%d",&a);
	while(t->next!=NULL)
	{
		if(t->next->data>a)
		{
			p=(Node*)malloc(sizeof(Node));
			p->data=a;
			p->next=t->next;
			t->next=p;
			break;
		}
		t=t->next;
	}
	t=head;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->next;	
	}
	return 0;
}
