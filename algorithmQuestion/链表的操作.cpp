#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
typedef int elemtype;
typedef struct node
{
	int data;
	struct node *next;
 } nodes;
 nodes *InitLinkList()
 {
 	nodes *p_node=(nodes *)malloc(sizeof(nodes));
 	p_node->next=NULL;
 	return p_node;
 }
 elemtype CreatLinkList(nodes *p_node,int value)
 {
 	if(p_node==NULL)
 		return ERROR;
 	nodes *current_node=p_node;
	nodes *new_node=(nodes *)malloc(sizeof(nodes));
	while(current_node->next!=NULL)
	{
		current_node=current_node->next;
	 }
	 new_node->data=value;
	 new_node->next=NULL;
	 current_node->next=new_node;
	 return OK; 
 }
 elemtype ForeachNode(nodes *p_node)
 {
 	if(p_node==NULL)
 		return ERROR;
 	nodes *current_node=p_node;
	while(current_node->next!=NULL)
	{
		current_node=current_node->next;
		printf("%d ",current_node->data);
	 }
	 return OK; 
 }
 elemtype InsertElem(int pos,int value,nodes *p_node)
 {
 	if(p_node==NULL)
 		return ERROR;
	nodes *new_node=(nodes *)malloc(sizeof(nodes));
	new_node->data=value;
	new_node->next=NULL;
	nodes *privious_node=p_node;
	nodes *current_node=p_node->next;
	int temp=1;
	while(current_node!=NULL)
	{
		if(pos==temp)
		{
			new_node->next=current_node;
			privious_node->next=new_node;
			break; 
		}
		else
		{
			privious_node=current_node;
			current_node=current_node->next;
			temp++;
		}
	} 
	return OK;
 }
 elemtype DeleteNode(int pos,nodes *p_node)
 {
 	if(p_node==NULL)
 		return ERROR;
 	nodes *privious_node=p_node;
 	nodes *current_node=p_node->next;
 	int temp=1;
 	while(current_node!=NULL)
 	{
 		if(temp==pos)
 		{
 			privious_node->next=current_node->next;
 			free(current_node);
 			current_node=NULL;
 			break;
		 }
		else
		{
			privious_node=current_node;
			current_node=current_node->next;
			temp++;
		}
	}
	return OK;
 }
 elemtype ClearLinkList(nodes *p_node)
 {
    if(p_node==NULL)
        return ERROR;
    nodes *current_node=p_node;
    while(current_node->next!=NULL)
    {
    	nodes *save_node=current_node; 
        current_node=current_node->next;
        free(save_node);
        save_node=NULL;
    }
    p_node->next=NULL;
    return OK;
 }
 elemtype DeleteLinkList(nodes *p_node)
 {
    if(p_node==NULL)
        return ERROR;
    free(p_node);
    p_node=NULL;
    return OK;
 }
 int main()
 {
 	nodes *p;
 	printf("-----创建链表-----\n"); 
 	p=InitLinkList();
 	int n;
 	printf("请输入链表节点的数目：");
 	scanf("%d",&n);
 	for(int i=0;i<n;i++)
 	{
 		printf("请输入第%d个节点的值\n",i+1);
 		int value;
 		scanf("%d",&value);
 		CreatLinkList(p,value);
	}
	printf("\n-----显示已创建的链表-----\n");
	ForeachNode(p);
	printf("\n\n-----在已有链表中插入一个新元素-----\n");
	printf("请选择插入元素的位置1~%d：",n);
	int pos,value;
	scanf("%d",&pos);
	printf("请输入插入元素的值：");scanf("%d",&value);
	InsertElem(pos,value,p);
	printf("\n-----显示插入新元素后的链表-----\n");
	ForeachNode(p);
	printf("\n-----删除一个节点-----\n");
	printf("请输入删除节点的位置1~%d: ",n+1);scanf("%d",&pos);
	DeleteNode(pos,p);
	printf("显示删除节点后的链表：\n");
	ForeachNode(p); 

    printf("\n-----清空链表-----\n");
    ClearLinkList(p);
    printf("显示清空链表后的链表：\n");
    ForeachNode(p);

    printf("\n-----删除链表------\n");
    DeleteLinkList(p);
	return 0; 
 }  
